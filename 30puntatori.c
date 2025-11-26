#include <stdio.h>
void inc(int *p){
    *p = *p + 1;
    printf("ptr=%p\n",(void*)p);
    printf("loc=%p\n",(void*)&p);
}
int main(){
    int z = 5;
    inc(&z);
    printf("z=%d\n", z);
    printf("addr z=%p\n",(void*)&z);
    return 0;
}
