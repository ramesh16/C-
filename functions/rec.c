#include <stdio.h>
#include <stdlib.h>
int factorial(int);
int main(int argc, char *argv[])
{
int n;
printf("Enter value of n\n");
scanf("%d",&n);
printf("The factorial of %d = %d\n",n,factorial(n));

}


int factorial(int n)
{
if (n == 0)
    return 1;

return(n*factorial(n-1));
}
