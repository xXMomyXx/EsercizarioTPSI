// Dopo aver inserito N numeri interi, con N scelto da utente, sommarli
#include <stdio.h>
int main()
{
    int numero, dimensione, somma, i = 0;
    float media;

    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &dimensione);
    while (dimensione <= 0)
    {
        printf("Non puoi inserire un ammontare di numeri negativo o nullo!\nInserisci di nuovo il numero.\n");
        scanf("%d", &dimensione);
    }
    printf("Inserisci %d numeri\n", dimensione);
    while (i < dimensione)
    {
        scanf("%d", &numero);
        i++;
        somma = somma + numero;
    }

    media = (float)somma / dimensione;

    printf("La somma e' %d\n", somma);
    printf("La media e' %.2f", media);

    return 0;
}