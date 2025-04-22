#include <stdio.h>
#include <math.h>


int main()
{

    int num = 2;
    int soma = 0;

    for(int i = 0; i <= num; i++)
    {

        soma += pow(num, i);

        if(i == num)
        {
            printf("%d^%d ", num, i);
        }
        else
        {
            printf("%d^%d + ", num, i);
        }
        
    }

    puts("");

    return 0;
    
}
