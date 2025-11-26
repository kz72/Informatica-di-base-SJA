#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    if(scanf("%d", &n)!=1 || n<=0) return 0;
    int *a = malloc(n * sizeof(int));
    if(!a) return 0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int dup = 0;
        for(int j=0;j<i;j++) if(a[j]==a[i]){ dup = 1; break; }
        if(!dup) {
            if(i>0) printf("%s"," ");
            printf("%d", a[i]);
        }
    }
    printf("\n");
    free(a);
    return 0;
}   
