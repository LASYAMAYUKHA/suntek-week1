/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

 
int fib(int n);
 
int main()
{
  int n, i = 0, c;
 
  scanf("%d", &n);
if(n>0){ 
  printf("Fibonacci series terms are:\n");
 
  for (c = 1; c <= n; c++)
  {
    printf("%d ", fib(i));
    i++;
  }
 
  return 0;
}
}
 
int fib(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fib(n-1) + fib(n-2));
}

