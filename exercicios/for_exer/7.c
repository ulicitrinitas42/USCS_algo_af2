#include <stdio.h>

int main()
{

    int num = 30;
    int soma = 0;

    printf("A soma da sequencia: ");

    for(int i = 0; i <= num; i++)
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
