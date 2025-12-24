#include<stdio.h>
int main()
{
    int i,j;
    printf("enter the year:");
    scanf("%d%d",&i,&j);
    while(i<=j)
    {
        if(i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}