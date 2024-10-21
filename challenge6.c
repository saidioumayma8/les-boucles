#include <stdio.h>

// Fonction pour vérifier si un nombre est premier
int estPremier(int num) {
    if (num <= 1) return 0;  // Les nombres <= 1 ne sont pas premiers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Trouvé un diviseur, donc pas premier
        }
    }
    return 1; // C'est un nombre premier
}

int main() {
    int n;

    printf("Entrez un entier n : ");
    scanf("%d", &n);

    printf("Nombres premiers entre 2 et %d :\n", n);
    for (int p = 2; p <= n; p++) {
        if (estPremier(p)) {
            printf("%d ", p);
        }
    }

    printf("\n");
    return 0;
}
