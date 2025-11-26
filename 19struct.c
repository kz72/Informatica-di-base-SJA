#include <stdio.h>
struct Persona {
    char nome[30];
    char cognome[30];
    int eta;
};
int main() {
    struct Persona p;
    printf("nome: ");
    scanf("%29s", p.nome);
    printf("cognome: ");
    scanf("%29s", p.cognome);
    printf("eta: ");
    scanf("%d", &p.eta);
    printf("\n--- dati ---\n");
    printf("%s\n", p.nome);
    printf("%s\n", p.cognome);
    printf("%d\n", p.eta);
    return 0;
}