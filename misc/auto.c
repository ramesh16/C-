#include <stdio.h>
void func(void);

int main()
{
int a =10,b=20;
	func();
	func();
	func();
	return 0;
}

void func(void)
{
printf("a = %d,b = %d\n",a,b);
a++;
b++;
}





