#include <stdio.h>
int main()
{
	int arr[3][4] = { {10,11,12,13},{20,21,22,23},{30,31,32,33}};
	int i,j;
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
		printf("address of a[%d][%d] =  %p\n",i,j,(*(arr+i)+j));
		printf("a[%d][%d] = %d = %d\n\n",i,j,arr[i][j],*(*(arr+i)+j));
		}
	}


return 0;
}
