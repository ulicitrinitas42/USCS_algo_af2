#include <stdio.h>

int main()
{
    int num = 0;
    int fat = 0;

    if(num == 0)
    {
        printf("O fatorial de 0 é 1\n");
    }
    else if(num == 1)
    {
        printf("O fatorial de 1 é 1\n");
    }
    else
    {
        for(int i = 1; i < num; i++)
        {
            fat *= i;
        }
    }


    return 0;
}
