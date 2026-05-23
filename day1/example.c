#include <stdio.h>

int main(void)
{
    int   age    = 25;
    float height = 175.5213;
    char  ch     = 'K';

    printf("나이: %d\n", age);
    printf("키: %.3f\n", height);
    printf("문자: %c\n", ch);
    printf("주소: %p\n", &age);
    return (0);
}