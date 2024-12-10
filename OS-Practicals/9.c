#include <stdio.h>
#include <unistd.h>



int main(){
    int child_pid  = fork();


    if (child_pid == 0){
        printf("Child process\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }else{
        printf("Parent process\n");
        printf("Parent PID: %d\n", getpid());
    }    
    
    return  0;
}
