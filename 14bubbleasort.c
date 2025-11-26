#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 6
int main(){
int a[N],i,j,tmp;
int max=300,min=100;
srand(time(NULL));
printf("valori random\n");
for(i=0;i<N;i++){
a[i]=rand()%(max-min+1)+min;
printf("a[%d] = %d\n",i,a[i]);
}
for(i=0;i<N-1;i++){
for(j=0;j<N-1;j++){
if(a[j]>a[j+1]){
tmp=a[j];
a[j]=a[j+1];
a[j+1]=tmp;
}
}
}
}