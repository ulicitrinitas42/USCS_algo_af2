#include <math.h>
#include <stdio.h>

#define tam 5

int main()
{
    int nums[tam];
    int i = 0;
    int soma = 0;
    double media;

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

    media = soma / (double) tam;

    printf("A media dos numeros eh %.3lf\n", media);

}

