#include <stdio.h>

int main()
{

    int n = 0;
    int proximo = 0;
    int antecessores[2] = {0, 1};

    puts("Escreva quantos termos a sequencia deve ter:");
    scanf("%d", &n);


    printf("Sequêcia de Fibboracci até o termo %d:\n", n);

    do
    {
        printf("%d ", antecessores[1]);

        proximo = antecessores[0] + antecessores[1];

        antecessores[0] = antecessores[1];
        antecessores[1] = proximo;

        n--;
        
    } while(n > 0);

    puts("");
    

    return 0;
}

