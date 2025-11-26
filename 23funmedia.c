#include <stdio.h>
float fai_media(float x, float y){
    return (x + y) / 2;
}
int main(){
    float uno, due, m;
    printf("metti un numero: ");
    scanf("%f", &uno);
    printf("metti un altro numero: ");
    scanf("%f", &due);
    m = fai_media(uno, due);
    printf("media = %f\n", m);
    return 0;
}