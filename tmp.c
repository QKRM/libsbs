#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a; //a의 값을 보관
    *a = *b; //a의 값을 b의 값으로 변경
    *b = tmp; //b의 값을 저장되어있던 a의 값으로 변경
}


int main(void) {
    /*
        int a = 5, b = 999;
    swap(&a, &b);
    printf("%d %d\n", a,b);

    return 0;
    */
    int *tmp = NULL;

    printf("%p\n", tmp);
}