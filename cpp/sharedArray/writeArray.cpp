#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

using namespace std;

struct Data
{
    int a;
    int arr[3];
};

int main()
{
  
  
  int shm_id;
  key_t key = 1234;
  struct Data *p;
  
  shm_id = shmget(key, sizeof(struct Data), IPC_CREAT | 0666);
  
  p = (struct Data *) shmat(shm_id, NULL, 0);
  
  p->a = 27;
  p->arr[0] = 1;
  p->arr[1] = 2;
  p->arr[2] = 3;
  
  cout << p->a << endl;
  cout << p->arr[0] << endl;
  cout << p->arr[1] << endl;
  cout << p->arr[2] << endl;
  
  int pid = fork();
  cout << "PID: " << pid << endl;   

  if(pid > 0)
  {
      sleep(1);
  }
  if(pid == 0)
  {
      p->a = 32;
      p->arr[0] = 4;
      p->arr[1] = 5;
      p->arr[2] = 6;
      exit(0);
  }
  
  cout << p->a << endl;
  cout << p->arr[0] << endl;
  cout << p->arr[1] << endl;
  cout << p->arr[2] << endl;

  return 0;

}
