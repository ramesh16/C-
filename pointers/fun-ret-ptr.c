#include <stdio.h>
int *fun(int n);
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
int main()
{

	int n = 5;
	int *ptr;

	ptr = fun(n);


	printf("In main\n");
	printf("address of p = %p\n",ptr);
	printf("address of ptr = %p, *ptr = %d\n",ptr,*ptr);

return 0;
}


int *fun(int n)
{
	int *p;

	p = arr;
	printf("In fun\n");
	printf("address of p = %p\n",p);
	p = p+n;
	printf("address of p = %p\n",p);
	return p;


}
