#include<stdio.h>
void main()
{
  int n,i;
  char str[50];
  printf("Enter n");
  scanf("%d",&n);
  printf("Enter str");
  scanf("%s",str);
  printf("%s\n",str);
  for(i=1;i<=n;i++)
    {
      printf("%c\n",str[i]);
    }
}