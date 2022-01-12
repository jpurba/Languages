#ifndef SHARED_MEMORY_BASE_H
#define SHARED_MEMORY_BASE_H

#include <sys/ipc.h>
#include <sys/shm.h>

#define DEFAULT_KEY_ID  5700        // default key for shared memory

class shared_memory_base
{
    struct shared_memory_packet {
        float analog_input[16];
        bool go_flag_second_loop = 1;
        bool go_flag_first_loop = 1;
    };

private:
    key_t key;
    int shmid = 0;
public:
    shared_memory_base();
    ~shared_memory_base();

    shared_memory_packet* data;
    void init();
    void change_shared_memory_key(key_t k){key= k;} // only use this function before init
    void detach_shared_memory();
};

#endif // SHARED_MEMORY_BASE_H
