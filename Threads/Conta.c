#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int p = fork();

    if (p < 0) {
        printf("Errore nella creazione del processo\n");
        exit(1);
    }

    if (p == 0) {
        printf("Sono il figlio: PID=%d, PPID=%d\n", getpid(), getppid());
        for (int i = 1; i <= 10; i++) {
            printf("Figlio: numero %d\n", i);
        }
    } else {
        printf("Sono il padre: PID=%d, PID del figlio=%d\n", getpid(), p);
        for (int i = 1; i <= 20; i++) {
            printf("Padre: numero %d\n", i);
        }
    }

    return 0;
}
