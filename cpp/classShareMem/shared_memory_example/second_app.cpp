#include <iostream>
#include "shared_memory_base.h"

using namespace std;

int main()
{
    int remainder;

    shared_memory_base comm;
    comm.init();

    comm.data->input[0] =0;
    comm.data->input[8] =0;
    comm.data->go_flag_first_app = 1;

    cout << "First test: ping - pong number" << endl;
    for (int i=0;i<10;i++){
        while( comm.data->go_flag_second_app != 1);  // wait until first program set it to 1
        comm.data->input[8] = 1000-i;                // write to buffer

        cout << "First Program wrote: ai[0]: " << comm.data->input[0] << endl; 

        comm.data->go_flag_second_app = 0;  // clear this so program 1 will set it to 1
    }
    cout << "end of the loop!" << endl;

    // ======= Test command buffer =======
    cout << "\ngo_flag_second_app = " << comm.data->go_flag_second_app << endl;
    comm.data->go_flag_first_app = 0;              // first app would check for this

    while( comm.data->go_flag_second_app != 1);  // wait until first program set it to 1
    cout << "First Program wrote on command buffer: " << comm.data->commandBuf << endl; 
    cout << "Write command: "; 
    cin.getline(comm.data->commandBuf,LOG_BUFFER_SIZE);
    comm.data->go_flag_first_app = 1;              // Set flag for first app to go
    cout << "go_flag_second_app = " << comm.data->go_flag_second_app << endl;


    // ======= Test log buffer =======
    cout << "\ngo_flag_second_app = " << comm.data->go_flag_second_app << endl;
    comm.data->go_flag_first_app = 0;              // first app would check for this
    comm.data->go_flag_second_app = 0;  // clear this so program 1 will set it to 1

    while( comm.data->go_flag_second_app != 1);  // wait until first program set it to 1
    cout << "First Program wrote on log buffer: " << comm.data->logBuf << endl; 
    cout << "Write log: "; 
    cin.getline(comm.data->logBuf,LOG_BUFFER_SIZE);
    comm.data->go_flag_first_app = 1;              // Set flag for first app to go
    cout << "go_flag_second_app = " << comm.data->go_flag_second_app << endl;

        //cout << "Write command: "; 
        //cin.getline(comm.data->commandBuf,STRINGBUFSIZE);
        
#if 0
        while( comm.data->go_flag_second_app != 1);  // wait until first program set it to 1
        //cin >> std::ws; // clear previous line
        remainder = comm.data->input[8] % 2;
        if (remainder ==0) // even number, program 2 write to command buffer
        {
            cout << "Write command: "; 
            cin.getline(comm.data->commandBuf,STRINGBUFSIZE);
        }
        else
        {   // odd number, program 2 write to log buffer
            cout << "Write log: "; 
            cin.getline(comm.data->logBuf,STRINGBUFSIZE);
        }
#endif

#if 0       
        // Check if program 1 write either odd or even number
        remainder = comm.data->input[0] % 2;
        if (remainder ==1) // odd number, program 1 write to command buffer
        {
            cout << "First Program wrote command buffer: " << comm.data->commandBuf << endl;
            cout << "Write log: "; 
            cin.getline(comm.data->logBuf,STRINGBUFSIZE);  // response with log            
        }
        else
        {   // even number, program 1 write to log
            cout << "First Program wrote log buffer: " << comm.data->logBuf << endl;
            cout << "Write command: "; 
            cin.getline(comm.data->commandBuf,STRINGBUFSIZE); // response with command
        }
#endif
    
    comm.detach_shared_memory();
    return 0;
}
