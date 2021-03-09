#include "shared_memory_base.h"

shared_memory_base::shared_memory_base()
{
    key = ftok("shmfile",DEFAULT_KEY_ID);
}

shared_memory_base::~shared_memory_base(){
    detach_shared_memory();
}

void shared_memory_base::init(){
    // shmget returns an identifier in shmid
    shared_memory_packet temp;
    shmid = shmget(key, sizeof(temp),0666|IPC_CREAT);
    // shmat to attach to shared memory
    data = (shared_memory_packet*) shmat(shmid,(void*)0,0);
}

void shared_memory_base::detach_shared_memory(){
    shmdt(data);
    shmctl(shmid,IPC_RMID,nullptr);
}
