#include<stdio.h>
#include<math.h>00
int main (){
  int n, orginalNum, remainder, result=0,digits=0;
  printf("Enter a number:");
  scanf("%d",&n);
  originalNum=n;
  while(originalNum!=0){
    originalNum/=10;
    digits++;
    printf("iteration: %d, Digits counted so far: %d\n", digits,digits);
  }
  originlNum=n;
  while(orginalNum!=0){
    remainder=originalNum%10;
    result+=pow(remainder,digits);
    orginalNum/=10;
  }
  if(result==n)
    printf("%dis an armstrong number.\n",n);
  else
    printf("%d is not an armstrong number.\n",n);
}

