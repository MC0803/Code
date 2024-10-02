#include<stdio.h>
#include<conio.h>
int main()
{
	int a,x,n;
	scanf("%d",&n);
	a=1;
	for(x=1;x<=n;++x)
	{
	a=a*x;
	}
     printf("Factorial=%d",a);
 }
