#include <stdio.h>

int main() {
    int i, num, somme = 0;

    printf("Entrez 10 nombres : \n");
    
    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num < 0) {
            continue;
        }

        somme += num;  
        }

    printf("La somme des nombres positifs est : %d\n", somme);
    return 0;
}
