// #include<stdio.h>
// int main()
// {
//     int n=123,rem,sum=0;
//     while(n>0)
//     {
//         rem=n%10;
//         sum=sum+rem;
//         n=n/10;
//     }
//     printf("%d",sum);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n=123,rem,sum=0;
  
    
        rem=n%10;
        sum=sum+rem;
        n=n/10;
                                   //without using loop
          rem=n%10;
        sum=sum+rem;
        n=n/10;

          rem=n%10;
        sum=sum+rem;
        n=n/10;
    
    printf("%d",sum);
    return 0;
}