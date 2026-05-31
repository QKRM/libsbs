#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 5;
    
    int real_size = size * 2 - 1;
    
    int i = 0;
    int j = 0;

    int center = size-1;

    int d_i = 0;
    int d_j = 0;

    while(i < real_size)
    {
        j = 0;
        while(j<real_size)
        {
            
            if(abs(center - i) + abs(center - j) == size-1)
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