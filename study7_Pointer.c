#include <stdio.h>
main()
{
    char a[] = { 'A', 'B', 'C', 'D','E','F'};
    char *p;
    p = &a[2];
    printf("%c, %c\n", *p, *(p-2));

    int x[5], y = 1, sum = 0;
    for(int i = 0; i <5; i++){
        x[i] = y;
        y *=2;
    }
    for (int i = 0; i < 5; i+=2)
        sum += *(x+i);
        printf("%d", sum);

}