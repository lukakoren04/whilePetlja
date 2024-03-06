Unos brojeva dok korisnik ne unese nulu:

#include <stdio.h>

int main() {
    int unos;
    
    printf("Unesite brojeve (unesite 0 za kraj): ");
    while (1) {
        scanf("%d", &unos);
        
        if (unos == 0) {
            printf("Unesen je 0. Kraj programa.\n");
            break;
        }
        
        printf("Unesen je broj: %d\n", unos);
    }

    return 0;
}
