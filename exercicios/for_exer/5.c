#include <stdio.h>

int main()
{

    puts("Imprimindo os numeros...");

    for(int i = 1; i <= 100; i++)
    {
        if(i % 6 == 0)
        {
            continue;
        }

        // deixa mais fácil de ler no console

        if(i % 10 == 0)
        {
            puts("");   
        }

        printf("%d ", i);
    }

    puts("");

    return 0;
}
