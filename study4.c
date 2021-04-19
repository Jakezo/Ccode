#include <stdio.h>
main()
{
    int score[] = {86, 53, 95, 76, 61};
    char grade;
    char str[] = "Rank";
    for (int i = 0; i < 5; i++)
    {
        switch (score[i] / 10)
        {
        case /* constant-expression */ 10:
        case 9:
            /* code */
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:;
            grade = 'C';
            break;

        default:
            grade = 'F';
        }
        if (grade != 'F')
            printf("%d is %c %s\n", i + 1, grade, str);
    }
}

/* 자동정렬 ctrl k f */
// %c 첫글자 한글자 출력. %s 대상이 가리키는 문자열의 내용을 출력


