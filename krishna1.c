#include<stdio.h> 
unsigned int factorial(unsigned int n)
{
if(n==0)
return 1;
return n*factorial(n-1);
}
int main()
{
int num=5;
printf("factorial of %is %d",num,factorial(num));
return0;
}
