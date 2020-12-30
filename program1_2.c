#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void displayInfoAboutProcess() {
    pid_t pid = getpid();
    pid_t ppid = getppid();
    uid_t uid = getuid();
    gid_t gid = getgid();

    printf("pid: %d", pid);
    printf("\tppid: %d", ppid);
    printf("\tuid: %u", uid);
    printf("\tgid: %u\n\n", gid);
    fflush(stdout);
}

void drawTree(){
    char cmd[20];
    pid_t pid = getpid();
    sprintf(cmd, "pstree -p %d", pid);

    for(int i = 0; i < 3; i++){
        fork();
        displayInfoAboutProcess();
        system(cmd);
        printf("\n\n");
        sleep(1);
    }
}

int main(){
    drawTree();
    
    return 0;
}

