#include <stdio.h>

int main(void)
{
/* 선언만 (초기화 없음 → 쓰레기값!) */
int    age;
double salary;

/* 선언 + 초기화 */
int    score  = 100;
char   grade  = 'A';
double pi     = 3.14159;

/* 타입 뒤 공백 정렬 */
int    count  = 0;
char   ch     = '\0';
double ratio  = 0.0;

/* const: 값이 변하지 않는 변수 */
const int    MAX  = 1024;
const double PI   = 3.141592653589793;
}