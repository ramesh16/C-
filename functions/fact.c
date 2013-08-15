#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main(int argc, char *argv[])
{
int n;
n = atoi(*(argv+1));
printf("The factorial of %d = %d\n",n,factorial(n));

}


int factorial(int n)
{
int fact = 1;
while(n>0)
{
fact = fact*n;
n--;
}
return (fact);
}
