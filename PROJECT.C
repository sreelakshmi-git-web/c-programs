#include <stdio.h>
// program to create a simple calculator
int main()
{
float a,b;
char o;
clrscr();

printf("enter the first number: ");
scanf("%f",&a);

printf("enter the operator (+,-,/,*): ");
scanf(" %c",&o);

printf("enter the second number: ");
scanf("%f",&b);

if(o=='+')
{
	printf("result = %.2f",a+b);
}
else if(o=='-')
{
	printf("result = %.2f",a-b);
}
else if(o=='*')
{
	printf("result = %.2f",a*b);
}
else if(o=='/')
{
	if(b!=0)
	{
	printf("result = %.2f",a/b);
	}
	else
	{
	printf("division by 0 is not possible");
	}
}
else
{
printf("invalid operator");
}
getch();
return 0;
}

