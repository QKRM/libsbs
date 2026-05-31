/* 재귀 예제 1: 자릿수 합 (digit sum)
**
** 문제: 양의 정수 n의 각 자릿수를 모두 더한 값을 반환한다.
**   digit_sum(0)    = 0
**   digit_sum(5)    = 5
**   digit_sum(123)  = 1 + 2 + 3 = 6
**   digit_sum(9999) = 9 + 9 + 9 + 9 = 36
**
** 재귀 아이디어:
**   - n % 10  → 마지막 자릿수
**   - n / 10  → 나머지 자릿수 (더 작은 문제)
**   - 종료 조건: n이 한 자리(n < 10)이면 n 자체를 반환
**
** 컴파일:  gcc -Wall -Wextra -Werror ex_rec_1.c -o ex_rec_1
*/

#include <stdio.h>

int	digit_sum(int n);

int	main(void)
{
	printf("digit_sum(0)    = %d\n", digit_sum(0));
	printf("digit_sum(5)    = %d\n", digit_sum(5));
	printf("digit_sum(123)  = %d\n", digit_sum(123));
	printf("digit_sum(9999) = %d\n", digit_sum(9999));
	printf("digit_sum(10)   = %d\n", digit_sum(10));
	printf("digit_sum(100)  = %d\n", digit_sum(100));
	return (0);
}

/* 동작 추적 (digit_sum(123)):
**
**   digit_sum(123)
**     = (123 % 10) + digit_sum(123 / 10)
**     = 3           + digit_sum(12)
**     = 3           + 2 + digit_sum(1)
**     = 3           + 2 + 1              ← 종료 조건 (1 < 10)
**     = 6
*/
int	digit_sum(int n)
{
	if (n < 10)          /* 종료 조건: 한 자리 수 */
		return (n);
	return (n % 10 + digit_sum(n / 10));   /* 마지막 자리 + 나머지 */
}
