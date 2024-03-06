//Simulacija bacanja kocke dok se ne dobije određeni broj:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ciljani_broj, baceni_broj, brojac_pokusaja = 0;

    srand(time(0)); // Inicijalizacija generatora slučajnih brojeva

    printf("Unesite ciljani broj (1-6): ");
    scanf("%d", &ciljani_broj);

    while (1) {
        brojac_pokusaja++;
        baceni_broj = rand() % 6 + 1; // Generiranje slučajnog broja od 1 do 6

        printf("Pokusaj %d: %d\n", brojac_pokusaja, baceni_broj);

        if (baceni_broj == ciljani_broj) {
            printf("Dobiven je ciljani broj %d! Broj pokusaja: %d\n", ciljani_broj, brojac_pokusaja);
            break;
        }
    }

    return 0;
}
