#include<stdio.h>
int main(){
int dim=3;
int v1[3],v2[3],v3[3];
int i;
printf("vettore1\n");
for(i=0;i<dim;i++){
printf("v1[%d]=",i);
scanf("%d",&v1[i]);
}
printf("\n\nvettore2\n");
for(i=0;i<dim;i++){
printf("v2[%d]=",i);
scanf("%d",&v2[i]);
}
printf("\n\n-vettore3\n");
for(i=0;i<dim;i++){
v3[i]=v1[i]+v2[i];
printf("v3[%d]=%d\n",i,v3[i]);
}
return 0;
}