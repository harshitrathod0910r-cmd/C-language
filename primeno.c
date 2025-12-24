// Online C compiler to run C program online
#include <stdio.h>

int main() 
 {
 int n,i=2,flag=0;
 printf("enter the number");
 scanf("%d",&n); //14
 if(n==0 || n==1)
 {
     printf("consonant");
 }
 for(i=2;i<=n/2;i++) //7
 {
     if(n%i==0)
     {
         flag=1;
         break;
     }
 }
 if(flag==0)
 {
     printf("this is prime");
 }
 else
 {
      printf("this is not prime");
 }

    return 0;
}