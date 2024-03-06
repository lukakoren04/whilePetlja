//Ispis prvih n prirodnih brojeva koristeći do-while petlju:

#include <stdio.h>

int main() {
    int n, brojac = 1;

    printf("Unesite broj n: ");
    scanf("%d", &n);

    do {
        printf("%d ", brojac);
        brojac++;
    } while (brojac <= n);

    printf("\n");

    return 0;
}
