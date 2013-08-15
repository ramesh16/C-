#include<stdio.h>

main()
{
int res;
	int (*fp)(int,int);
	int add(int,int);
fp=add;
res=(*fp)(10,20);
printf("sum of two numbers is %d",res);
}

int add(int a,int b)
{
int c;
c=a+b;
return c;
}

