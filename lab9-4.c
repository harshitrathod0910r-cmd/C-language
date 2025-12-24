#include<stdio.h>
int main()
{
    int n;
    printf("enter the n:");
    scanf("%d",&n);
    while(n>=0)
    {
        printf("%d\n",n);
        n=n-2;
    }
    return 0;
}