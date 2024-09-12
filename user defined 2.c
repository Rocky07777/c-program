int add,prod,subt,quot,remn;
int manju(int a, int b);
int main()
{
  int num1, num2, sum, prod, subt, quot, remn;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  sum = manju(num1, num2);
  prod = manju(num1, num2);
  subt = manju(num1, num2);
  quot = manju(num1, num2);
  remn = manju(num1, num2);
  printf("sum = %d", sum);
  printf("prod = %d", prod);
  printf("subt = %d", subt);
  printf("quot = %d", quot);
  printf("remn = %d", remn);
}
int manju(int a, int b)
{
  return a+b;
  return a-b;
  return a*b;
  return a/b;
  return a%b;
}