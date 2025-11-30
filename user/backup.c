#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
    int pid = fork();
    if (pid < 0) {
        printf("init_sysinfotest: fork failed\n");
        exit(1);
    }

    if (pid == 0) {
        exec("_sysinfotest", (char*[]){ "_sysinfotest", 0 });
        printf("init_sysinfotest: exec _sysinfotest failed\n");
        exit(1);
    } else {
        int status;
        wait(&status);
        printf("init_sysinfotest: finished\n");
        exit(0);
    }
}
