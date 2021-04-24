#include <stdio.h>
int add(int, int);          // 반환형 함수명 선언(매개변수1 타입, 매개변수2 타입,....)  return이 반환할 함수명 꼭 적기
int add(int x, int y)     // 반환현 함수명 정의
{
    int sum;
    sum = x + y;
    return sum;
}
int main()
{
    printf("10 + 20 = %d\n" , add(10,20));
    return 0;
}