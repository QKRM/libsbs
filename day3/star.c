#include <stdio.h>

int	main(void)
{
	int	n;
	int	i;
	int	j;
	int	size;

	printf("N을 입력하세요 (2 이상): ");
	if (scanf("%d", &n) != 1 || n < 2)
	{
		printf("잘못된 입력입니다.\n");
		return (1);
	}
	size = 2 * n - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == 0 || i == size - 1
				|| j == 0 || j == size - 1
				|| i == j || i + j == size - 1)
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
