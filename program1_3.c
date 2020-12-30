#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    const int count = 3;
    char cmd[20];
   
    sprintf(cmd, "pstree -p %d", getppid());
    for(int i = 0; i < count; i++)
    {
        int statusFork = fork();
        switch(statusFork)
        {
            case -1:
                perror("Problem with fork");
                exit(1);
                break;
            case 0:
                if(execl("./program1_1", "program1_1", NULL) == -1){
                    perror("Execl error");
                    exit(2);
                }
                break;
        }
    }

    system(cmd);

    for(int i = 0; i < count; i++)
    {
        int status;
        int pidWait = wait(&status);
        printf("Proces %d has ended with status: %d \n", pidWait, status);
    }
    return 0;
}
