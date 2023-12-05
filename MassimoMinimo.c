// Trovare il numero piu' grande  e il numero piu' piccolo in una serie di numeri inserita dall'utente.

#include <stdio.h>

int main()
{
    int dimensione, i = 0;
    double num, max, min;

    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &dimensione);

    while (dimensione <= 0)
    {
        printf("Non puoi inserire un ammontare di numeri negativo o nullo!\nInserisci di nuovo il numero.\n");
        scanf("%d", &dimensione);
    }

    printf("Inserisci i numeri");
    scanf("%lf", &num);
    min = num;
    max = num;

    while (i < dimensione - 1)
    {
        scanf("%lf", &num);
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
        i++;
    }

    printf("Il numero piu' grande e': %.2lf\n", max);
    printf("Il numero piu' piccolo e': %.2lf", min);
}