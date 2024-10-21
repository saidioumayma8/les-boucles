#include <stdio.h>

int main() {
    int n, i, a = 1, b = 1, fib;

    printf("Entrez le terme n de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        fib = 1; 
    } else {
        for (i = 2; i <= n; i++) {
            fib = a + b; 
            a = b;
            b = fib;
        }
    }

    printf("Le terme %d de la suite de Fibonacci est %d\n", n, fib);
    return 0;
}
