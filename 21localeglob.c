#include <stdio.h>
int inc(int x){
    x = x + 1;
    printf("n adesso vale %d\n", x);
    return x;
}
int main(){
    int a;
    printf("numero: ");
    scanf("%d", &a);
    a = inc(a);
    printf("a = %d\n", a);
    return 0;
}