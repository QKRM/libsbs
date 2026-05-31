/* 재귀 예제 2: 거듭제곱 (recursive power)
**
** 문제: base의 exp 제곱을 재귀로 계산한다. (exp >= 0)
**   power(2, 0)  = 1
**   power(2, 1)  = 2
**   power(2, 10) = 1024
**   power(3, 4)  = 81
**
** 재귀 아이디어:
**   - 종료 조건: exp == 0  →  어떤 수든 0제곱은 1
**   - 재귀 호출: base^exp = base * base^(exp-1)
**
** 컴파일:  gcc -Wall -Wextra -Werror ex_rec_2.c -o ex_rec_2
*/

#include <stdio.h>

int	power_rec(int base, int exp);
int	power_loop(int base, int exp);

int	main(void)
{
	int	b;
	int	e;

	printf("%-30s %10s %10s\n", "식", "재귀", "반복");
	printf("------------------------------------------------------\n");
	b = 2; e = 0;
	printf("power(%d, %2d)          %10d %10d\n", b, e, power_rec(b, e), power_loop(b, e));
	b = 2; e = 1;
	printf("power(%d, %2d)          %10d %10d\n", b, e, power_rec(b, e), power_loop(b, e));
	b = 2; e = 10;
	printf("power(%d, %2d)          %10d %10d\n", b, e, power_rec(b, e), power_loop(b, e));
	b = 3; e = 4;
	printf("power(%d, %2d)          %10d %10d\n", b, e, power_rec(b, e), power_loop(b, e));
	b = 5; e = 5;
	printf("power(%d, %2d)          %10d %10d\n", b, e, power_rec(b, e), power_loop(b, e));
	return (0);
}

/* 동작 추적 (power_rec(2, 4)):
**
**   power_rec(2, 4)
**     = 2 * power_rec(2, 3)
**     = 2 * 2 * power_rec(2, 2)
**     = 2 * 2 * 2 * power_rec(2, 1)
**     = 2 * 2 * 2 * 2 * power_rec(2, 0)
**     = 2 * 2 * 2 * 2 * 1             ← 종료 조건 (exp == 0)
**     = 16

*/
int	power_rec(int base, int exp)
{
	if (exp == 0)                      /* 종료 조건: 0제곱 = 1 */
		return (1);
	return (base * power_rec(base, exp - 1));   /* 재귀 호출 */
}

/* 비교용 반복 버전 */
int	power_loop(int base, int exp)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}
