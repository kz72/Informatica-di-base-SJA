#include <stdio.h>
struct Lavoratore {
    char nome[30];
    char cognome[30];
    int stipendio;
};
int main() {
    struct Lavoratore l[5];
    int i;
    int somma = 0;
    int min, max;
    for(i = 0; i < 5; i++) {
        printf("lavoratore %d nome: ", i);
        scanf("%29s", l[i].nome);
        printf("cognome: ");
        scanf("%29s", l[i].cognome);
        printf("stipendio: ");
        scanf("%d", &l[i].stipendio);
    }
    min = l[0].stipendio;
    max = l[0].stipendio;
    for(i = 0; i < 5; i++) {
        if(l[i].stipendio < min) min = l[i].stipendio;
        if(l[i].stipendio > max) max = l[i].stipendio;
        somma += l[i].stipendio;
    }
    printf("min: %d\n", min);
    printf("max: %d\n", max);
    printf("media: %.2f\n", (float)somma/5);
    return 0;
}