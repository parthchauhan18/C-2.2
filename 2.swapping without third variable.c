//w.a.p to swap two numbers without using third variable.//
#include<stdio.h>
int main()
{
	int a,b;
	printf("----before swapping----\n");
	printf("enter the value of a: ");
	scanf("%d",&a);
	printf("enter the value of b: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("----After swapping----\n");
	printf("the value of: a=%d, b=%d",a,b);
	
	return 0;
}
