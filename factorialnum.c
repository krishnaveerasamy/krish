#include<stdio.h>
main()
{
int fact=1,n;
printf("enter the number");
scanf(%d",&n);
for(int i=1;i<=n;i++)
{
fact=fact*i;
printf("the factorial of the given number is %d",&fact);
getch();
}
