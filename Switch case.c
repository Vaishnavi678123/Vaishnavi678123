
#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter the value:");
scanf("%d%d %c",&a,&b,&op);
switch(op)
{
case'+':printf("the addition is %d",a+b);
break;
case'-':printf("the subtraction is %d",a);
break;
case'/':printf("the modules is %d",a/b);
break;
case'*':printf("the multiplication is %d"
,a*b);
break;
case'%':
printf("the division is %d",a%b);
break;
}
}