#include<stdio.h>
int main()
{
    int sp,cp,amt;
    printf("enter selling price:\n");
    scanf("%d",&sp);
    printf("enter cost price:\n");
    scanf("%d",&cp);
    if(sp>cp)
    {
        amt=sp-cp;
        printf("profit=%d",amt);
    }
       else 
    {
        amt=cp-sp;
        printf("loss=%d",amt);
    }
    return 0;

}