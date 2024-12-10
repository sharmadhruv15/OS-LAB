#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(){
    int fd_child[2], fd_parent[2];

    if (pipe(fd_child) == -1){
        printf("Pipe failed\n");
        return 1;
    }
    if (pipe(fd_parent) == -1){
        printf("Pipe failed\n");
        return 1;
    }


    int pid = fork();
    if (pid > 0){
        // parent block
        char message[32] = {0};

        snprintf(message, 32, "Hi from Parent!");
        close(fd_child[0]);

        printf("Parent Sent Message: %s\n", message);
        write(fd_child[1], message, 32);
        close(fd_child[1]);

        wait(NULL);

        read(fd_parent[0], message, 32);
        printf("Parent received: %s\n", message);
        close(fd_parent[0]);

    }else{
        // child block
        char message[32] = {0};

        close(fd_child[1]);
        read(fd_child[0], message, 32);

        printf("Child received: %s\n", message);

        snprintf(message, 32, "Hi from Child!");

        close(fd_child[0]);
        close(fd_parent[0]);

        write(fd_parent[1], message, 32);
        printf("Child Sent Message: %s\n", message);

        close(fd_parent[1]);
        exit(0);
    }

    return 0;
}