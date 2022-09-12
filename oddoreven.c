#include <stdio.h>
int main()
{
  int a;
  printf("Enter a Number to find Even or Odd\n");
  scanf("%d", &a);
  if (a%2 == 0)
    printf("The Number is Even\n");
  else
    printf("The Number is Odd\n");
  return 0;
}
