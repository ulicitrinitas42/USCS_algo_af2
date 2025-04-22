#include <stdio.h>

int main()
{

    int num = 0;
    int soma = 0;

    printf("Escreva quantos numeros quer na sequencia: ");
    scanf("%d", &num);

    printf("A soma da sequencia: ");

    for(int i = 1; i <= num; i++)
    {
        if(i == num)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d, ", i);
        }

        soma += num;
    }

    printf("eh %d\n", soma);

    return 0;
}
