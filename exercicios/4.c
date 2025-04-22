#include <stdio.h>

int main()
{

    int n = 0;
    int i = 1;
    int soma = 0;

    puts("Escreva o valor do passo do somatorio: ");
    scanf("%d", &n);

    while(i < n)
    {
        int s1 = 5 * (i * i);
        int s2 = 2 * i;

        soma += s1 + s2 + 8;
        i++;
    }

    printf("O resultado do somatorio eh %d\n", soma);


    return 0;
}
