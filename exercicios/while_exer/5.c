#include <stdio.h>

#define tam 5

int main()
{
    int nums[tam];
    int i = 0;
    int soma = 0;

    puts("Digite cinco números (1 por <enter>): ");

    while(i < tam)
    {
        scanf("%d", &nums[i]);
        i++;
    }

    i = 0;

    while(i < tam)
    {
        soma += nums[i];
        i++;
    }

    double media = soma / tam;

    printf("A media dos numeros eh %.3lf\n", media);

}

