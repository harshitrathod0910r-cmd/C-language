#include<stdio.h>
int main()
{
    int n=5,fact=1;
   
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("fact=%d",fact);
}