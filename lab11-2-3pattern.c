#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<i;k++)
        {
            printf("*");
        }                                    //3
        for(j=i;j<=5;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}