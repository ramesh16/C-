#include <stdio.h>
int main()
{
	int arr[3][4] = { {10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int *ptr = arr;

	printf("arr = %p\n",arr);	
	printf("arr+1 = %p\n",arr+1);	
	printf("arr+2 = %p\n",arr+2);	
#if 10
	printf("*arr = %p\n",*arr);	
	printf("*arr+1 = %p\n",*(arr+1));	
	printf("*arr+2 = %p\n",*(arr+2));	
	printf("arr[0] = %p\n",arr[0]);	
	printf("arr[1] = %p\n",arr[1]);	
	printf("arr[2] = %p\n",arr[2]);	

#endif


return 0;
}
