#include <iostream>
#include <unistd.h>
#include "shared_memory_base.h"

using namespace std;

int main()
{
    int remainder;
    shared_memory_base comm;
    comm.init();

    comm.data->input[0] =0;
    comm.data->input[8] =0;

    cout << "First test: ping - pong number" << endl;
    for (int i=0;i<10;i++){
        while( comm.data->go_flag_first_app != 1); // wait until second program set it to 1
        comm.data->input[0] = i;

        cout << "Second Program wrote: ai[8]: " << comm.data->input[8] << endl;

        comm.data->go_flag_second_app = 1;
        sleep(1);
    }
    cout << "end of the loop!" << endl;


    // ======= Test Command buffer =======
    cout << "\ngo_flag_second_app = " << comm.data->go_flag_second_app << endl;

    cout << "Write command: "; 
    cin.getline(comm.data->commandBuf,LOG_BUFFER_SIZE);
    comm.data->go_flag_second_app = 1;              // Set flag for second app to go
    while( comm.data->go_flag_first_app != 1);      // wait until second program set it to 1
    cout << "Second Program wrote command buffer: " << comm.data->commandBuf << endl;

    // ======= Test log buffer =======
    cout << "\ngo_flag_second_app = " << comm.data->go_flag_second_app << endl;

    cout << "Write log: "; 
    cin.getline(comm.data->logBuf,LOG_BUFFER_SIZE);
    comm.data->go_flag_second_app = 1;              // Set flag for second app to go
    while( comm.data->go_flag_first_app != 1); // wait until second program set it to 1
    cout << "Second Program wrote log buffer: " << comm.data->logBuf << endl;

#if 0        
        //cin >> std::ws; // clear previous line
        remainder = comm.data->input[0] % 2;
        if (remainder ==1) // odd number, program 1 write to command buffer
        {
            cout << "Write command: "; 
            cin.getline(comm.data->commandBuf,STRINGBUFSIZE);
        }
        else
        {   // even number, program 1 write to log buffer
            cout << "Write log: "; 
            cin.getline(comm.data->logBuf,STRINGBUFSIZE);
        }
#endif


#if 0
        // Check if program 2 write either odd or even number
        remainder = comm.data->input[8] % 2;
        if (remainder ==0) // even number, program 2 write to command buffer
        {
            cout << "Second Program wrote command buffer: " << comm.data->commandBuf << endl;
            cout << "Write log: "; 
            cin.getline(comm.data->logBuf,STRINGBUFSIZE); // response with log            
        }
        else
        {   // odd number, program 2 write to log
            cout << "Second Program wrote log buffer: " << comm.data->logBuf << endl;
            cout << "Write command: "; 
            cin.getline(comm.data->commandBuf,STRINGBUFSIZE);  // response with command
        }   
#endif

    
    comm.detach_shared_memory();
    return 0;
}
