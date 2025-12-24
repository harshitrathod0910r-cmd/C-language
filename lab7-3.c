#include <stdio.h>

int main() 
{
    int a=40, b=50, c=30 ;
  

     (a > b) ? ((a > c) ? printf("a") : printf("c")) 
             : ((b > c) ? printf("b") : printf("c"));

   
    return 0;
}