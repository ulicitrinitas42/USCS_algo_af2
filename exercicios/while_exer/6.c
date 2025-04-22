#include <stdio.h>

int main()
{

    int n = 0;
    int maior = 0;

    while(1)
    {
        printf("digite um número [escreva -999 pra sair]: ");
        scanf("%d", &n);

        if(n == -999)
        {
            break;
        }

        if(maior < n)
        {
            maior = n;
        }

    }

    printf("O maior numero eh %d\n", maior);

    return 0;
}
