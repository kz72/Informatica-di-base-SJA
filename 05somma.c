#include <stdio.h>
int main(){
    int i;
    int somma=0;
    printf("somma iniziale -> %d\n", somma);
    for(i=0;i<=100;i++){
        somma = somma + i;
        printf("ciclo %d - somma = %d\n", i, somma);
    }
}
