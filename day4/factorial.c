#include <stdio.h>

int factorial(int n)
{
    if (n < 0)
        return (-1);
    else if (n <= 1)
        return (1);
        // ↑ 종료 조건 (base case)
    return (n * factorial(n - 1));
        // ↑ 재귀 호출 (더 작은 문제)
}

int main(void) {
    printf("%d\n", factorial(-5));
    return 0;
}