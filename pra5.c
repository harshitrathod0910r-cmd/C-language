// #include<stdio.h>
// int main()
// {
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5;j++)
//         {
//              printf("%d\t",j);
//         }
       
    
//     printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     char i,j;
//     for(i='a';i<='e';i++)
//     {
//         for(j='a';j>='e';j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main()
{
    char i,j;
    for(i='a';i<='e';i++)
    {
        for(j='a';j<='e';j++)
        {
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}