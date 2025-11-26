#include <stdio.h>
int main() {
    int eta;
    char sesso;
    printf("Inserisci eta: ");
    scanf("%d", &eta);
    printf("Inserisci sesso (m/f): ");
    scanf(" %c", &sesso);
    if (sesso == 'f' || eta >= 18) {
        printf("Accesso consentito\n");
    } else {
        printf("Accesso negato\n");
    }
    return 0;
}
