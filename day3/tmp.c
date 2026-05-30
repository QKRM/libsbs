#include <stdio.h>

int main()
{
    int size = 5;
    
    int real_size = size * 2 - 1;
    
    int i = 0;
    int j = 0;

    while(i < real_size)
    {
        j = 0;
        while(j<real_size)
        {
            if(i == 0 || i == real_size-1 || j == 0 || j == real_size-1 || i == j || i + j == real_size-1)
                printf("*");
            else
                printf(" ");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}