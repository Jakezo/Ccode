#include <stdio.h>

void main(){
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8,9, 10};
    printf("%d\n  ", *a);
        printf("%d\n", *a+2);
            printf("%d\n ", *(a+2));
                printf("%d\n", *(a+2)+2);

    int num = 0;
    int i, j;
    for(i=1; i<=3; i++){
        for(j=1; j<=5; j++){
            num = i*j;
        }
    }
    

    printf("%d\n",num);

    int x = 10, y = 10, z = 30;
    x /=y;
    y -= x;
    z %=y;
    printf("%d ,,@ %d\n, %d\n", x, y, z);

}    
