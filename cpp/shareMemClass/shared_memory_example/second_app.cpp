#include <iostream>
#include "shared_memory_base.h"

using namespace std;

int main()
{
    shared_memory_base comm;
    comm.init();

    comm.data->analog_input[0] =0;
    comm.data->analog_input[8] =0;
    comm.data->go_flag_first_loop = 1;

    for (int i=0;i<10;i++){
        while( comm.data->go_flag_second_loop != 1);
        comm.data->analog_input[8] = 1000-i;
        cout << "ai[0]: " << comm.data->analog_input[0] << endl;
        comm.data->go_flag_second_loop = 0;
    }

    cout << "end of the loop!" << endl;
    comm.detach_shared_memory();
    return 0;
}
