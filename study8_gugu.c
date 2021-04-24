#include <stdio.h>
int main()
{
    int i;
    i = 0;
    printf("== 구구단: 2단 출력 ==\n");
    while (i<9)
    {
        i++;
        printf("%d*%d = %2d\n",2, i, 2*i);   // %2d 는 앞에 여백을 한개 두고 숫자 출력(일의 자리 수일때)
    }
    return 0;
    
}