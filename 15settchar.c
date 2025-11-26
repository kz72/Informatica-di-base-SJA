#include<stdio.h>
int main(){
char c;
printf("Inserisci un carattere: ");
scanf(" %c",&c);
switch(c){
case 'l':printf("Lunedi\n");break;
case 'm':printf("Martedi\n");break;
case 'M':printf("Mercoledi\n");break;
case 'g':printf("Giovedi\n");break;
case 'v':printf("Venerdi\n");break;
case 's':printf("Sabato\n");break;
case 'd':printf("Domenica\n");break;
default:printf("Carattere non valido\n");
}
return 0;
}