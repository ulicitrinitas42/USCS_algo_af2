#include <stdio.h>

#define tam 3

int main()
{

    int nums[tam];

    puts("Digite 3 numeros: ");

    for (int i = 0; i < tam; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("nums: %d %d %d\n", nums[0], nums[1], nums[2]);

    return 0;
}

