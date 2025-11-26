//Esercizio 3 – Archivio studenti con struct e menu
#include <stdio.h>
struct Studente{int m;int v;int c;};
int inserisci_studente(struct Studente x[], int n){
    if(n>=50){printf("pieno\n");return n;}
    struct Studente t;
    printf("matr: "); scanf("%d",&t.m);
    printf("voto: "); scanf("%d",&t.v);
    printf("cfu: "); scanf("%d",&t.c);
    x[n]=t;
    return n+1;
}
void stampa_studenti(struct Studente x[], int n){
    if(n==0){printf("vuoto\n");return;}
    int i;
    for(i=0;i<n;i++) printf("%d %d %d\n",x[i].m,x[i].v,x[i].c);
}
float media_voti(struct Studente x[], int n){
    if(n==0) return 0;
    int i,s=0;
    for(i=0;i<n;i++) s+=x[i].v;
    return (float)s/n;
}
int cerca_per_matricola(struct Studente x[], int n, int m){
    int i;
    for(i=0;i<n;i++) if(x[i].m==m) return i;
    return -1;
}
int indice_voto_massimo(struct Studente x[], int n){
    if(n==0) return -1;
    int i,b=0;
    for(i=1;i<n;i++) if(x[i].v>x[b].v) b=i;
    return b;
}
int main(){
    struct Studente x[50];
    int n=0;
    int s,m,k;
    do{
        printf("1 ins\n2 stampa\n3 media\n4 cerca\n5 max\n0 esci\n");
        scanf("%d",&s);
        switch(s){
            case 1:
                n=inserisci_studente(x,n);
                break;
            case 2:
                stampa_studenti(x,n);
                break;
            case 3:
                if(n==0) printf("vuoto\n");
                else printf("%f\n",media_voti(x,n));
                break;
            case 4:
                printf("matr: ");
                scanf("%d",&m);
                k=cerca_per_matricola(x,n,m);
                if(k==-1) printf("no\n");
                else printf("%d %d %d\n",x[k].m,x[k].v,x[k].c);
                break;
            case 5:
                k=indice_voto_massimo(x,n);
                if(k==-1) printf("vuoto\n");
                else printf("%d %d %d\n",x[k].m,x[k].v,x[k].c);
                break;
            case 0:
                break;
            default:
                printf("???\n");
        }
    }while(s!=0);
}
