// #include<stdio.h>
// int main()
// {
//     int n=123,rev=0,rem;
//     while(n>0)
//     {
//         rem=n%10;
//         rev=rev*10+rem;
//         n=n/10;

//     }
//     printf("%d",rev);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n=123,rev=0,rem;
    
    
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

        rem=n%10;
        rev=rev*10+rem;           //without using loop
        n=n/10;

        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    
    printf("%d",rev);
    return 0;
}