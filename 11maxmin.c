#include<stdio.h>
#define N 5

int main(){
int v[N];
int max=v[0],min;

printf("max iniziale=%d\n",max);
printf("Inserisci numeri:\n");
for(int i=0;i<N;i++){
printf("Numero%d:",i+1);
scanf("%d",&v[i]);
}
min=v[0];
for(int i=0;i<N;i++){
if(v[i]>max){max=v[i];}
if(v[i]<min){min=v[i];}
}
printf("max=%d\n",max);
printf("min=%d\n",min);
return 0;
}
