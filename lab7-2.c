// #include<stdio.h>
//  int main()
// {
//     int num1,num2,num3,num4;
//     printf("enter the number:");
//     scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
//     if(num1>=num2 && num1>=num3 && num1>=num4)
//     {
//        printf("%d is maximum",num1);
//     }
//       else if(num2>=num3 && num2>=num4 && num2>=num1)
//     {
//        printf("%d is maximum",num2);
//     }
//       else if(num3>=num4 && num3>=num2 && num3>=num1)
//     {
//        printf("%d is maximum",num3);
//     }
//       else
//     {
//        printf("%d is maximum",num4);
//     }
// }
// #include<stdio.h>
// int main()
// {
//    int num1,num2,num3,num4;
//    printf("enter the 4 num:");
//    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
//    if(num1>num2)
//    {
//       printf("%d is max:",num1);
//       }
//    else
//    {
//       if(num1>num3)
//       {
//          printf("%d is max:",num2);
//       }
//       else{
//          if(num1>num4)
//          {
//             printf("%d is max:",num3);
//          }
//          else{
//             printf("%d is max:",num4);
//          }
//       }
//    }
//    return 0;
// }

// #include<stdio.h>

// int main()
// {
// int num1,num2,num3,min;
// printf(" enter three number:");
// scanf("%d%d%d",&num1,&num2,&num3);
// if(num1<num2)
// {
// 	if(num1<num3)
// 	{
// 	min=num1;
// 	}
// 	else
// 	{
// 	min=num3;
// 	}
// }
// else
// {
// 	if(num2<num3)
// 	{
// 	min=num2;
// 	}
// 	else
// 	{
// 	min=num3;
// 	}
// }
// printf("minimu no=%d",min);
// }
#include<stdio.h>

int main()
{
int num1,num2,num3,num4,min;

printf(" enter three number:");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
if(num1<num2)
{
	if(num1<num3)
	{
	min=num1;
	}
	else
	{
	min=num2;
	}
}
else
{
	if(num1<num4)
	{
	min=num3;
	}
	else
	{
	min=num4;
	}
}
printf("minimu no=%d",min);
return 0;
}