#include<stdio.h>
#include<conio.h>
main()
{
	int a,x,n;
	printf("enter a number");
	scanf("%d",&n);
	a=1;
	if(n<=10)
	{
	for(x=0;;++x)
	{
		a=x*n;
	}
	}
	printf("%d\n",a);
}
