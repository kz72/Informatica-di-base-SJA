#include<stdio.h>
#define N 5
int main(){
int array[N]={7,5,4,10,12};
int somma=0,i;
printf("stampa vettore\n");
for(i=0;i<N;i++){
printf("a[%d]=%d\n",i,array[i]);
}
printf("somma\n");
for(i=0;i<N;i++){
somma=somma+array[i];
printf("ciclo%d-sommaattuale=%d\n",i,somma);
}
printf("somma=%d\n",somma);
return 0;
}
