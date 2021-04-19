#include <stdio.h>

int main()
{
  int result, a = 102, b = 220 , c =300;
  result = a < b ? b ++ : --c;
  printf("%d, %d ,%d\n", result, b, c);
}


