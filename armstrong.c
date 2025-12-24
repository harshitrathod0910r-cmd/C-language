// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int num=153,p,sum=0,rem;
   printf("enter the num:");
   scanf("%d",&num);
   p=num;
   while(num>0)
{
    rem=num%10;
    sum=sum+rem*rem*rem;
    num=num/10;
}
if(p==sum)
{
    printf("armstrong no");
}
else{
    printf("not armstrong no");
}
    return 0;
}