#include <stdio.h>
int main(int argc, char *argv[])
{
int a[5],i;
	for(i=1;i<6;i++)
	{
	a[i-1]=atoi(argv[i]);
	}

	for(i=0;i<5;i++)
	{
	printf("%d\n",a[i]);
	}
return 0;
}
