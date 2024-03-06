//Računanje faktorijela broja:

#include <stdio.h>

int main() {
    int broj, faktorijel = 1;

    printf("Unesite broj: ");
    scanf("%d", &broj);

    int temp = broj;
    while (temp > 0) {
        faktorijel *= temp;
        temp--;
    }

    printf("Faktorijel broja %d je %d.\n", broj, faktorijel);

    return 0;
}
