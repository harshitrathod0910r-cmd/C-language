#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no:");
    scanf("%d",&n); 
    for(i=2;i<n;i++)
    {
        while(n%i==0)
        {
            printf("%d\n",i); 
            n=n/i;  
        }
    }
}