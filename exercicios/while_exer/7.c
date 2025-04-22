#include <stdio.h>

int main()
{

    int soma = 0;
    int num = 0;

    scanf("%d", &num);

    while(num != 0)
    {
        soma += num % 10;
        num /= 10;
    }

    printf("A soma dos digitos eh %d\n", soma);

    return 0;
}
