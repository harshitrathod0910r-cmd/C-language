#include<stdio.h>
int main()
{
    int phy,chem,bio,eng,math;
    float per;
    printf("enter subject marks");
    scanf("%d%d%d%d%d \n",&phy,&chem,&bio,&eng,&math);
    per=(phy+chem+bio+eng+math)/5;
    
    printf("per=%f",per);

    if(per>=90)
    {
        printf("grade A");
    }
    else if(per>=80)
    {
        printf("grade B");
    }
     else if(per>=70)
    {
        printf("grade c");
    }
     else if(per>=60)
    {
        printf("grade d");
    }
     else if(per>=50)
    {
        printf("grade e");
    }
   else
   {
        printf("grade f");
   }
   return 0;

}