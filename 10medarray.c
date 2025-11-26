#include<stdio.h>
#define N 5
int main(){
int v[N];
float somma=0,media;
printf("numero media?:\n");
for(int i=0;i<N;i++){
printf("numero%d:",i+1);
scanf("%d",&v[i]);
somma+=v[i];
}
media=somma/N;
printf("media=%f\n",media);
return 0;
}