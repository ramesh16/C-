#include <stdio.h>
#include <stdlib.h>
int sumdigit(int);
int main(int argc, char *argv[])
{
int n;
n = atoi(*(argv+1));

printf("The sum of the digits of %d = %d\n",n,sumdigit(n));

return 0;
}


int sumdigit(int n)
{
int sum=0,rem;
while(n > 0)
{
rem = n%10;
sum += rem;
n /= 10;
}
return sum;
}
