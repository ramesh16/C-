#include <stdio.h>
int main()
{
	int arr[5] = {3,5,6,7,9};
	int *p = arr;
	int (*ptr)[5];

	ptr = arr;
	printf("p = %p,ptr = %p\n",p,ptr);
	printf("*p = %d, *ptr = %p\n",*p,*ptr);
#if 1
	p++;
	ptr++;
	printf("p = %p,ptr = %p\n",p,ptr);
	printf("*p = %d,*ptr = %p\n",*p,*ptr);
#endif
	printf("sizeof(p)  = %u,size of (*p) = %u\n",sizeof(p),sizeof(*p));
	printf("sizeof(ptr)  = %u,size of (*ptr) = %u\n",sizeof(ptr),sizeof(*ptr));



	return 0;
}
