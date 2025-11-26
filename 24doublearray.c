#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main() {
    int x[N];
    int y[N] = {0};
    int i, j, ok, p = 0, tmp;
    srand(time(NULL));
    for(i=0;i<N;i++){
        x[i] = rand() % 201;
    }
    for(i=0;i<N;i++){
        ok = 0;
        for(j=0;j<N;j++){
            if(x[i] == y[j]){
                ok = 1;
                break;
            }
        }
        if(ok == 0){
            y[p] = x[i];
            p++;
        }
    }
    for(i=0;i<p-1;i++){
        for(j=0;j<p-1;j++){
            if(y[j] > y[j+1]){
                tmp = y[j];
                y[j] = y[j+1];
                y[j+1] = tmp;
            }
        }
    }
    printf("x:\n");
    for(i=0;i<N;i++){
        printf("%d ", x[i]);
    }
    printf("\n\n y ordinato senza duplicati:\n");
    for(i=0;i<p;i++){
        printf("%d ", y[i]);
    }
    printf("\n");
    return 0;
}