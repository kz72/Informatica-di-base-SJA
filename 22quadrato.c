#include <stdio.h>
int q(int pippo){
    return pippo * pippo;
}
int main(){
    int pippo, pluto;
    printf("num: ");
    scanf("%d", &pippo);
    pluto = q(pippo);
    printf("quadrato = %d\n", pluto);
    return 0;
}