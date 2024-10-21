#include <stdio.h>

int main() {
    int base, exposant, result = 1;

    printf("Entrez la base: ");
    scanf("%d", &base);
    printf("Entrez l'exposant  : ");
    scanf("%d", &exposant);

    while (exposant > 0) {
        result *= base; 
        exposant--;      
    }

    printf("Le résultat est : %d\n", result);
    return 0;
}
