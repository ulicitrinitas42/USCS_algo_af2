#include <stdio.h>

int main()
{
    int num = 0;
    int fat = 1;

    printf("escreva o numero que quer o fatorial: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        fat *= i;

        printf("%d, %d\n", i, fat);
    }

    printf("O fatorial de %d eh %d\n", num, fat);


    return 0;
}
