#include <stdio.h>

int main(void)
{
    int guess = 44;
    int tries = 0;
    int answer;
while (1)
{
    printf("숫자 (1~100): ");
    scanf("%d", &guess);
    tries++;
    if (guess > answer)
        printf("더 작게!\n");
    else if (guess < answer)
        printf("더 크게!\n");
    else {
        printf("정답! %d번\n", tries);
        break;
    }
}
}
