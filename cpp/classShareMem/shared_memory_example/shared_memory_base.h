#ifndef SHARED_MEMORY_BASE_H
#define SHARED_MEMORY_BASE_H

#include <sys/ipc.h>
#include <sys/shm.h>
#include <string>

#define DEFAULT_KEY_ID 5700        // default key for shared memory
#define INTARRAYSIZE 16
#define STRINGBUFSIZE  8192

#define CMD_BUFFER_SIZE                8192 //134217728       //0x8000000  // 128MB
#define LOG_BUFFER_SIZE                8192 //134217728       //0x8000000  // 128MB
#define CMD_CNT_BUFFER_SIZE               4
#define CMD_TOTAL_CNT_BUFFER_SIZE         4
#define DEV_STATE_BUFFER_SIZE          8192 //57280       //   (size_t)0xDFC0  
#define VERSION_INFO_SIZE              8192
#define SYS_STATUS_REGISTER_SIZE          4
#define CTRL_EVENT_REGISTER_SIZE          4
#define IMAGE_TAG_BUFFER_SLOT_SIZE      512
#define IMAGE_TAG_BUFFER_SLOT_COUNT       8 // 8 entries, 4KB total
#define IMAGE_TAG_BUFFER_SIZE        (IMAGE_TAG_BUFFER_SLOT_SIZE * IMAGE_TAG_BUFFER_SLOT_COUNT)  
#define IMAGE_TAG_BUFFER_TAG_SIZE       448 // this is the max size for tag string in each slot
#define IMAGE_DATA_BUFFER_SIZE         4096 

class shared_memory_base
{
    struct shared_memory_packet {
        int input[INTARRAYSIZE];

        char commandBuf[CMD_BUFFER_SIZE];
        char logBuf[LOG_BUFFER_SIZE];
        char cmdCntBuf[CMD_CNT_BUFFER_SIZE];
        char cmdTotalCntBuf[CMD_TOTAL_CNT_BUFFER_SIZE];

        char devStateBuf[DEV_STATE_BUFFER_SIZE];
        char verInfoBuf[VERSION_INFO_SIZE];
        char sysStatusBuf[SYS_STATUS_REGISTER_SIZE];
        char ctrlEventBuf[CTRL_EVENT_REGISTER_SIZE];

        char imgTagBuf[IMAGE_TAG_BUFFER_SIZE];
        char imgDataBuf[IMAGE_DATA_BUFFER_SIZE];

        bool go_flag_second_app = 1;
        bool go_flag_first_app = 1;
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
