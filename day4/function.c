#include <stdio.h>

int add(int, int);
void print_line(void);
int try_change(int);

int main (void) {

    int a = 5;
    a = try_change(a);

    printf("%d\n", a);
    print_line();
    printf("%d\n",add(4,6));
    

    return 0; //0 잘끝났습니다~ or 뭔가 문제가 생겼다
}

int add(int a, int b)
{
    return (a + b);  // 반환값
}

void print_line(void) {
    printf("------------------\n");
    return;
}

int try_change(int x)
{
    x = x + 1;
    return x;
}