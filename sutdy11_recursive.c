#include <stdio.h>    // 재귀호출문제 나올지는 모르겠음 표를 그려서 생각해보자 
void main(){                // recursive(0) 부터 쭉 구해보고 그뒤에 대입해서 호출해보자
    recursive(5);
}
int recursive(int n){
    int i;
    if (n <1) return 2;
    else {
        i = (2 *recursive(n -1)) + 1;
        printf("%d\n",i);
        return i;
    }
}
