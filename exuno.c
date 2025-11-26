//Esercizio 1 – Statistiche su numeri interi
#include <stdio.h>
int main() {
    int numero;
    int count = 0;
    int somma = 0;
    int max, min;
    int pari = 0;
    int dispari = 0;
    printf("Inserisci un numero (0 per terminare): ");scanf("%d", &numero);
    if (numero == 0) {
        printf("Nessun numero inserito.\n");
        return 0;
    }
    max = numero;
    min = numero;
    while (numero != 0) {
        count++;
        somma += numero;

        if (numero > max) {
            max = numero;
        }

        if (numero < min) {
            min = numero;
        }
        if (numero % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
        printf("Inserisci un numero (0 per terminare): ");scanf("%d", &numero);
    }
    printf("\nNumeri inseriti: %d\n", count);
    printf("Somma: %d\n", somma);
    printf("Media: %.2f\n", (float)somma / count);
    printf("Massimo: %d\n", max);
    printf("Minimo: %d\n", min);
    printf("Pari: %d\n", pari);
    printf("Dispari: %d\n", dispari);
    return 0;
}
