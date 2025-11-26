//Esercizio 2 – Temperature, array e funzioni
#include <stdio.h>
float calcola_media(float v[], int n){
    float s = 0;
    for(int i=0;i<n;i++){
        s += v[i];
    }
    return s/n;
}
float trova_massimo(float v[], int n){
    float max = v[0];
    for(int i=1;i<n;i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}
float trova_minimo(float v[], int n){
    float min = v[0];
    for(int i=1;i<n;i++){
        if(v[i] < min){
            min = v[i];
        }
    }
    return min;
}
int conta_maggiori_di_media(float v[], int n){
    float m = calcola_media(v,n);
    int c = 0;
    for(int i=0;i<n;i++){
        if(v[i] > m){
            c++;
        }
    }
    return c;
}
int main(){
    int n;
    printf("Giorni: "); scanf("%d",&n);
    float v[n];
    for(int i=0;i<n;i++){
        printf("Temp %d: ", i+1);
        scanf("%f",&v[i]);
    }
    float media = calcola_media(v,n);
    float max = trova_massimo(v,n);
    float min = trova_minimo(v,n);
    int maggiori = conta_maggiori_di_media(v,n);
    printf("Media: %.2f\n", media);
    printf("Max: %.2f\n", max);
    printf("Min: %.2f\n", min);
    printf("Giorni sopra media: %d\n", maggiori);
    return 0;
}