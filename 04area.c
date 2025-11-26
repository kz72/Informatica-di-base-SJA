#include <stdio.h>
int main() {
    float b, h, a;
    printf("base = ");
    scanf("%f", &b);
    printf("altezza = ");
    scanf("%f", &h);
    a = b * h / 2;
    printf("area = %.2f\n", a);
}
