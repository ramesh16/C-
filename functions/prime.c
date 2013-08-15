#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int n;
n = atoi(*(argv+1));
if(prime(n))
	printf("It is a prime number\n");
else
	printf("It is not a prime number\n");

return 0;
}


int prime(int n)
{
int i,rem,count=0;
for(i = 1; i<= n;i++)
{
rem = n%i;
if (rem == 0)
{
count++;
}
}
if(count == 2 || count == 1)
  return 1;
else
  return 0;


}
