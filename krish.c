#include<stdio.h>
void main()
{
int num,digit;
printf("\n enter the number");
scanf("%d",num);
do
{
digit=num%10;
num=num/10;
perintf("%d",digit);
}while(num!=0);
getch();
