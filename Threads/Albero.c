#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("Io sono il padre: P, PID=%d\n", getpid());

    if (fork() == 0) {
        printf("Io sono il figlio: F1, PID=%d, PPID=%d\n", getpid(), getppid());
    } else {
        if (fork() == 0) {
            printf("Io sono il figlio: F2, PID=%d, PPID=%d\n", getpid(), getppid());
            if (fork() == 0) {
                printf("Io sono il figlio: F4, PID=%d, PPID=%d\n", getpid(), getppid());
            } else {
                if (fork() == 0) {
                    printf("Io sono il figlio: F5, PID=%d, PPID=%d\n", getpid(), getppid());
                }
            }
        } else {
            if (fork() == 0) {
                printf("Io sono il figlio: F3, PID=%d, PPID=%d\n", getpid(), getppid());
            }
        }
    }

    return 0;
}
