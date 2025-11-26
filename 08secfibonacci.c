#include<stdio.h>
#define Paperino 100
int main(){
long long v[Paperino];
v[0]=1;
v[1]=2;
int i;
for(i=2;i<Paperino;i++){
v[i]=v[i-1]+v[i-2];
}
for(i=0;i<Paperino;i++){
printf("v[%d]=%lld\n",i,v[i]);
}
return 0;
}
