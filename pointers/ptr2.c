#include <stdio.h>
int main()
{
int a = 10;
int *ptr = &a;
printf("ptr = %p\n",ptr);
printf("*ptr = %d\n",*ptr);

return 0;
}
