#include<stdio.h>
int main(){
int somma,n,i;
somma=0;
printf("InserisciN=");
scanf("%d",&n);
for(i=0;i<=n;i++){
if(i%2==0){
somma=somma+i;
printf("ciclo%d-somma=%d\n",i,somma);
}else{
printf("ciclo%d-%de'dispari\n",i,i);
}
}
printf("Sommafinale=%d\n",somma);
}
