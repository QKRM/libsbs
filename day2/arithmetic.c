#include <stdio.h>

int main()
{
    int a = 17;
    int b = 5;

    printf("%d\n", a + b);  // 덧셈: 22
    printf("%d\n", a - b);  // 뺄셈: 12
    printf("%d\n", a * b);  // 곱셈: 85
    printf("%d\n", a / b); // 정수 나눗셈: 3 ⚠
    printf("%.1f\n", (double)a / b);  //실수로 명시적 형 변환 해주기
    printf("%d\n", a % b);  // 나머지: 2
}