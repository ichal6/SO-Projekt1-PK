#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

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

int main(){
    displayInfoAboutProcess();

    return 0;
}
