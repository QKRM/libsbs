#include <stdio.h>

void func1(void)
{
    func2();
}

void func2(void)
{
    return;
}

int main(void)
{
    func1();
    return 0;
}