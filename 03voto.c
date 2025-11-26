#include <stdio.h>
int main() {
    int condotta, voto;
    printf("Inserisci voto di condotta: ");
    scanf("%d", &condotta);
    printf("Inserisci voto scolastico: ");
    scanf("%d", &voto);
    if (condotta >= 6 && voto >= 6) {
        printf("Promosso\n");
    } else {
        printf("Bocciato\n");
    }
    return 0;
}
