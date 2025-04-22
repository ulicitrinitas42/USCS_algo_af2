#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

    int num = 0;
    int n = 0;
    int i = 0;

    // gera um número aleatório de 1 a 100

    srand(time(NULL));

    n = rand() % 100;


    // loop pra adivinhar

    puts("======================= Tente adivinhar o número =======================");

    printf("tentativa 1: ");
    scanf("%d", &num);

    i++;

    while(n != num)
    {
        if(i > 10)
        {
            printf("tentativa %d (dica: %d): ", i+1, n);
            scanf("%d", &num);
        }
        else
        {
            printf("tentativa %d: ", i+1);
            scanf("%d", &num);
        }

        i++;
    }



    return 0;
}

