#include <stdio.h>

int main() {
    int n, inverse = 0, reste;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    while (n != 0) {
        reste = n % 10;        
        inverse = inverse * 10 + reste; 
        n /= 10;    
    }

    printf("Nombre inverse: %d\n", inverse);

    return 0;
}
