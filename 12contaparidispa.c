#include<stdio.h>
#define N 6
int main(){
int a[N],i,cnt_pari=0,cnt_dispari=0;
printf("numeri in memoria stuck?\n");
for(i=0;i<N;i++){
printf("a[%d] = %d\n",i,a[i]);
}
printf("sovrascrivi celle\n");
for(i=0;i<N;i++){
printf("a[%d] = ",i);
scanf("%d",&a[i]);
for(i=0;i<N;i++){
if(a[i]%2==0){
cnt_pari++;
}else{
cnt_dispari++;
}
}
printf("I numeri pari sono %d \n",cnt_pari);
printf("I numeri dispari sono %d \n",cnt_dispari);
return 0;
}