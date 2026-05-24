#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("=== 연산자 우선순위 실험 ===\n\n");

	printf("[ 산술 우선순위 ]\n");
	printf("2 + 3 * 4     = %d  (* 먼저 → 14)\n", 2 + 3 * 4);
	printf("(2 + 3) * 4   = %d  (괄호 먼저 → 20)\n", (2 + 3) * 4);
	printf("10 - 4 / 2    = %d  (/ 먼저 → 8)\n", 10 - 4 / 2);
	printf("(10 - 4) / 2  = %d  (괄호 먼저 → 3)\n", (10 - 4) / 2);
	printf("10 %% 3 + 1    = %d  (%% 먼저 → 2)\n", 10 % 3 + 1);

	printf("\n[ 비교 + 산술 혼합 ]\n");
	a = 5;
	b = 3;
	c = 2;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
	printf("a + b > c     = %d  (+ 먼저, 그 다음 >)\n", a + b > c);
	printf("a > b + c     = %d  (+ 먼저, 그 다음 >)\n", a > b + c);
	printf("a - b == c    = %d  (- 먼저, 그 다음 ==)\n", a - b == c);

	printf("\n[ 논리 연산자 우선순위 ]\n");
	printf("1 || 0 && 0   = %d  (&& 먼저 → 1)\n", 1 || 0 && 0);
	printf("(1 || 0) && 0 = %d  (괄호 먼저 → 0)\n", (1 || 0) && 0);
	printf("!0 + 1        = %d  (! 먼저 → 2)\n", !0 + 1);
	printf("!(0 + 1)      = %d  (괄호 먼저 → 0)\n", !(0 + 1));

	printf("\n[ 대입 연산자는 가장 낮음 ]\n");
	a = 3 + 4 * 2;
	printf("a = 3 + 4 * 2 → a = %d  (곱셈 → 덧셈 → 대입 순)\n", a);
	a = 10;
	b = a++ + 1;
	printf("a=10일 때 b = a++ + 1 → b=%d, a=%d  (후위: 대입 후 증가)\n", b, a);
	a = 10;
	b = ++a + 1;
	printf("a=10일 때 b = ++a + 1 → b=%d, a=%d  (전위: 증가 후 대입)\n", b, a);

	return (0);
}
