#include <stdio.h>
void func(int (*a)[4]);
int main()
{
	int arr[3][4] = { {10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int i,j;
	printf("Inside main, size of array = %d\n",sizeof(arr));
	
	printf("\n\nInside main\n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
		printf("address of a[%d][%d] =  %p\n",i,j,(*(arr+i)+j));
		printf("a[%d][%d] = %d = %d\n",i,j,arr[i][j],*(*(arr+i)+j));
		}
	}
	func(arr);
	printf("\n\nInside main\n");
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
		printf("address of a[%d][%d] =  %p\n",i,j,(*(arr+i)+j));
		printf("a[%d][%d] = %d = %d\n",i,j,arr[i][j],*(*(arr+i)+j));
		}
	}


return 0;
}
void func(int (*a)[4])
	{
	
	int i,j;
	printf("Inside func, size of array = %d\n",sizeof(a));
	printf("Inside func, size of array = %d\n",sizeof((*a)));
	
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
		a[i][j] =  *(*(a+i)+j)+2;
		printf("address of a[%d][%d] =  %p\n",i,j,(*(a+i)+j));
		printf("a[%d][%d] = %d = %d\n",i,j,a[i][j],*(*(a+i)+j));
		}
	}



	}
