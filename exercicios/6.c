#include <stdio.h>
#include <limits.h>

#define tam 3

int main()
{

    int nums[tam];
    int menor = INT_MAX;

    puts("Digite 3 numeros: ");

    for (int i = 0; i < tam; i++) 
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < tam; i++)
    {
        if(menor > nums[i])
        {
            menor = nums[i];
        }
    }

    printf("O menor eh %d\n", menor);

    return 0;
}
