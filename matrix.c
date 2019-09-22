/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
int n,a[30][30],b[30],i,j;
    printf("sizof matrix");
    scanf("%d",&n);
    for(i-0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                b[i]=a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}
