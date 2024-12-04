#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    printf("Io sono il padre A, PID=%d\n", getpid());

    int p1 = fork();
    if (p1 == 0) {
        printf("Io sono il figlio B, PID=%d, il mio nome è Qui\n", getpid());
        exit(0);
    }

    int p2 = fork();
    if (p2 == 0) {
        printf("Io sono il figlio C, PID=%d, il mio nome è Quo\n", getpid());
        exit(0);
    }

    int p3 = fork();
    if (p3 == 0) {
        printf("Io sono il figlio D, PID=%d, il mio nome è Qua\n", getpid());
        exit(0);
    }

    return 0;
}
