#include<stdio.h>
void main()
{
char ch;
printf("enter the character:");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("%c is a vowel");
break;
default:
printf("it is not constant ");
}
}
