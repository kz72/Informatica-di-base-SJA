#include<stdio.h>
#include<string.h>
#define Paperino 20
void leggiStringa(char str[],int paperino){
fgets(str,paperino,stdin);
if(str[strlen(str)-1]=='\n')
str[strlen(str)-1]='\0';
else
while(getchar()!='\n');
}
int main(){
char username[Paperino];
printf("username: ");
leggiStringa(username,Paperino);
printf("username=%s\n",username);
printf("lunghezza username=%lu\n",strlen(username));
return 0;
}