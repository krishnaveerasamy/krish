#include<stdio.>
void main()
{
int c=0,v=0;
char x;
printf("enter any string\n");
do
{
switch(x=getchar())
{
case 'a';
case'e';
case'i';
case'o';
case'u';
v++;
break;
case'\n';
break;
defalut;
c++;
break;
}
}while(x!="\n");
printf("no of vowels %d\n",v);
printf("no of constants is %d",c);
getch();
}
