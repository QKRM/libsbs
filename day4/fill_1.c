/* 채우기 예제 1: 최솟값 · 최댓값 · 절댓값
**
** 아래 함수 세 개의 본문을 직접 채우세요.
** 컴파일:  gcc -Wall -Wextra -Werror ex_fill_1.c -o ex_fill_1
**
** 기대 출력:
**   max(3, 7)   = 7
**   min(3, 7)   = 3
**   abs_val(-5) = 5
**   abs_val(5)  = 5
**   abs_val(0)  = 0
*/

#include <stdio.h>

int	max(int a, int b);
int	min(int a, int b);
int	abs_val(int n);

int	main(void)
{
	printf("max(3, 7)   = %d\n", max(3, 7));
	printf("min(3, 7)   = %d\n", min(3, 7));
	printf("abs_val(-5) = %d\n", abs_val(-5));
	printf("abs_val(5)  = %d\n", abs_val(5));
	printf("abs_val(0)  = %d\n", abs_val(0));
	return (0);
}

/* a와 b 중 큰 값을 반환하세요. */
int	max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

/* a와 b 중 작은 값을 반환하세요. */
int	min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}

/* n의 절댓값을 반환하세요. (음수면 부호 반전, 나머지는 그대로) */
int	abs_val(int n)
{
    if(n < 0)
        return (n * -1);
    else
        return n;
}
