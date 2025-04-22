#include <stdio.h>
#include <math.h>


int main()
{

    int num = 0;
    int soma = 0;

    printf("Escreva qual numero quer ver a sequencia de potencias: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++)
    {

        soma += pow(num, i);

        if(i == num)
        {
            printf("%d^%d", num, i);
        }
        else
        {
            printf("%d^%d + ", num, i);
        }
        
    }

    printf(" == %d\n", soma);

    return 0;
    
}
