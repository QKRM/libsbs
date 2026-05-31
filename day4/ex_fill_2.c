/* 채우기 예제 2: 거듭제곱(반복) · 1~n 합(반복)
**
** 아래 함수 두 개의 본문을 직접 채우세요.
** 컴파일:  gcc -Wall -Wextra -Werror ex_fill_2.c -o ex_fill_2
**
** 기대 출력:
**   power(2, 0)  = 1
**   power(2, 1)  = 2
**   power(2, 10) = 1024
**   power(3, 4)  = 81
**   sum_to(1)    = 1
**   sum_to(5)    = 15
**   sum_to(10)   = 55
**   sum_to(100)  = 5050
*/

#include <stdio.h>

int	power(int base, int exp);
int	sum_to(int n);

int	main(void)
{
	printf("power(2, 0)  = %d\n", power(2, 0));
	printf("power(2, 1)  = %d\n", power(2, 1));
	printf("power(2, 10) = %d\n", power(2, 10));
	printf("power(3, 4)  = %d\n", power(3, 4));
	printf("sum_to(1)    = %d\n", sum_to(1));
	printf("sum_to(5)    = %d\n", sum_to(5));
	printf("sum_to(10)   = %d\n", sum_to(10));
	printf("sum_to(100)  = %d\n", sum_to(100));
	return (0);
}

/* base의 exp 제곱을 반환하세요. (반복문 사용, exp >= 0 보장)*/
int	power(int base, int exp)
{
    int result = 1;
    int i = 0;    
    while(i < exp)
    {
        result = result * base;
        i++;
    }
    return (result);
}

/* 1부터 n까지의 합을 반환하세요. (반복문 사용, n >= 1 보장)*/
int	sum_to(int n)
{
    int total = 0;
    int i = 1;
    while(i <= n)
    {
        total = total + i;
        i++;
    }
    return (total);
}
