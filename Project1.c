#include<stdio.h>
void main()
{
	int a,b,add,sub,mul,div;
	printf("Enter the two numbers:");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("%d\n%d\n%d\n%d\n",add,sub,mul,div);	
}
