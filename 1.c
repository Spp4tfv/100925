#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(){

    printf("PID: %d\n",getpid());
    pid_t child = fork();
    if (0 == child) printf("PID_CHILD: %d\n",getpid());
    pid_t grandson = fork();
    if (0 == grandson) printf("PID_GRANDSON: %d\n",getpid());
    return 0;
}