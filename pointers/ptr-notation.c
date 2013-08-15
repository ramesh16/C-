#include <stdio.h>
int main()
{
	int arr[5] = {5, 10,15,20,25};
	int i;
	int *p = arr;
	
	for(i = 0; i < 5 ; i++)
	{

	printf("Address of arr[%d] = %p = %p\n",i,p+i,&p[i]);
	printf("value of arr[%d] = %d = %d\t",i,*(p+i),p[i]);
 	}
	return 0;

}
