#include <stdio.h>
int main()
{
int a = 10;
float b = 3.4,*fp = &b;
void *vp;
vp = &a;

printf("a = %f\n",*fp);
printf("a = %d\n",*(int *)vp);
vp = &b;
printf("b = %f\n",*(float *)vp);

return 0;
}
