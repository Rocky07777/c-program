#include <stdio.h>
int main() {
  int n,originalNum,reversedNum=0,remainder,iteration = 1;
  printf ("enter a number:");
  scanf ("%d",&n);
  originalNum=n;
  while (n!=0) {
    remainder = n % 10;
    reversedNum = reversedNum*10+remainder;

    n/=10;
    iteration++;
    remainder = n%10;
    reversedNum=reversedNum *10+remainder;
    printf("iteration %d:remainder=%d, reversedNum=%d\n",iteration,remainder, reversedNum);
    n/=10;
    iteration++;
  }
  if (originalNum == reversedNum)
    printf("%d is a polindrome number .\n",originalNum);
  else
    printf("%d is not a polindrome  number .\n",originalNum);
}
