#include <iostream>
#include <unistd.h>
#include "shared_memory_base.h"

using namespace std;

int main()
{
    shared_memory_base comm;
    comm.init();

    comm.data->analog_input[0] =0;
    comm.data->analog_input[8] =0;

    for (int i=0;i<10;i++){
        while( comm.data->go_flag_first_loop != 1);
        comm.data->analog_input[0] = i;
        cout << "ai[8]: " << comm.data->analog_input[8] << endl;
        comm.data->go_flag_second_loop = 1;
        sleep(1);
    }

    cout << "end of the loop!" << endl;
    comm.detach_shared_memory();
    return 0;
}
