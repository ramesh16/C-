#include <stdio.h>
int main()
{
int *ptr[3];
int i;
int a = 5;
int c = 20;
int b = 10;
ptr[0] = &a;
ptr[1] = &b;
ptr[2] = &c;
printf("address of a = %p,b = %p,c = %p\n",&a,&b,&c);
printf("address of ptr = %p\n",ptr);
for( i=0;i<3;i++)
{
printf("&ptr[%d] = %p\n",i,&ptr[i]);
printf("ptr[%d] = %p\n",i,ptr[i]);
printf("*ptr[%d] = %d\n",i,*ptr[i]);
}
return 0;
}
