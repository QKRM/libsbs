#include <stdio.h>

int main(void)
{
    int a = 5;

    a++; //a = a + 1
    a--;

    a += 2; // a = a + 2
    printf("%d\n",a);
    a *= 2;
    printf("%d\n",a);
    a -= 2;
    printf("%d\n",a);
    a /= 2;
    printf("%d\n",a);
    a %= 2; // a = a % 2
    printf("%d\n",a);
}