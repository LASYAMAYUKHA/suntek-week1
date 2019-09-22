/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{int a[50],n,i,s1,p1,k,l,m,x,y,s=0,p=0;
 printf("no no elements");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
   s=s+a[i];
   p=p+(a[i]*a[i]);
 }

s1=(n*(n+1))/2;
p1=(n*(n+1)*((2*n)+1))/6;
k=s1-s;
l=p1-p;
m=l/k;
x=(k+m)/2;
y=(m-k)/2;
printf("%d %d",x,y);
}