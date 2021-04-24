#include<stdio.h>
int main()
{
    int i;
    int A[] = {10,20,30,40,50};
    int* p;
    p = A;          // p = &A[0]
    for(i=0; i<5; i++)
    {
        printf("%5d", *(p+i));                  // printf("%5d", p[i]);
    }
    return 0;
}