#include <stdio.h>

int main()
{
    int  N, i, premier;
    printf("Entrer un nombre : ");
    scanf("%d", &N);
    premier = 1;
    for ( i = 2; i <= N/2 ; i++)
    {
        if ( N%i == 0){
            premier = 0;
            break;
        }
    }
        if (premier == 1)
        printf("%d est premier.",N);
        else
        printf("%d est non premier.",N);

    return 0;
}
