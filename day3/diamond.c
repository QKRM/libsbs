#include <stdio.h>

/*
** N을 입력받아 (2N-1) x (2N-1) 격자에 다이아몬드 테두리를 출력하시오.
**
** N=5 예시:
**     *
**    * *
**   *   *
**  *     *
** *       *
**  *     *
**   *   *
**    * *
**     *
**
** 조건: 중심 (N-1, N-1)으로부터의 맨해튼 거리 == N-1
*/

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	size;
	int	center;

	printf("N을 입력하세요 (2 이상): ");
	if (scanf("%d", &n) != 1 || n < 2)
	{
		printf("잘못된 입력입니다.\n");
		return (1);
	}
	size = 2 * n - 1;
	center = n - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			int di = i - center;
			int dj = j - center;
			if (di < 0) di = -di;
			if (dj < 0) dj = -dj;
			if (di + dj == center)
				printf("*");
			else
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
