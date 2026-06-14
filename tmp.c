#include <stdio.h>
#include <string.h>

typedef struct s_student
{
	char	name[20];
	int		age;
	int		score;
}	t_student;

double		average(t_student *arr, int size);
t_student	*find_top(t_student *arr, int size);
t_student	*find_low(t_student *arr, int size);

int	main(void)
{
	t_student	class[5] = {
		{"Kim", 20, 95},
		{"Lee", 21, 88},
		{"Park", 22, 70},
		{"Choi", 20, 85},
		{"Jung", 23, 85}
	};
	t_student	*top;
	t_student	*low;

	top = find_top(class, 5);
	low = find_low(class, 5);
	printf("평균: %.1f점\n", average(class, 5));
	printf("최고: %s (%d점)\n", top->name, top->score);
	printf("최저: %s (%d점)\n", low->name, low->score);
	return (0);
}

double	average(t_student *arr, int size)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < size)
	{
		sum += arr[i].score;
		i++;
	}
	return ((double)sum / size);
}

t_student	*find_top(const t_student *arr, int size)
{
	t_student	*top;
	int			i;

	top = &arr[0];
	i = 1;
	while (i < size)
	{
		if (arr[i].score > top->score)
			top = &arr[i];
		i++;
	}
	return (top);
}

t_student	*find_low(t_student *arr, int size)
{
	t_student	*low;
	int			i;

	low = &arr[0];
	i = 1;
	while (i < size)
	{
		if (arr[i].score < low->score)
			low = &arr[i];
		i++;
	}
	return (low);
}
