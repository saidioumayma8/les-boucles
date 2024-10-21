#include <stdio.h>

int main()
{
    int L, i, j;

    printf("Entrer le nombre de lignes : ");
    scanf("%d", &L);

    for (i = 1; i <= L; i++)
    {
        for (j = 1; j <= L - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i + i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
