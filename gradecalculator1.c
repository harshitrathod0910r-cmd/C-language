#include<stdio.h>
int main()
{
    // int marks;
    char grade;
    int phy,chem,bio,eng,math;
    float per;
    printf("enter subject marks");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&eng,&math);
    per=(phy+chem+bio+eng+math)/5;
    printf("per=%f",per);

     grade=(per>90) ? 'a' :
          (per>70) ? 'b' :
          (per>60) ? 'c' :
          (per>50) ? 'd' : 'e';

    printf("garde:%c",grade);

    switch (grade)
    {
        case 'a':
                    printf("excelent work\n");
                    break;
        case 'b':
                    printf("well done\n");
                    break;
        case 'c':
                    printf("good job\n");
                    break;
        case 'd':
                    printf("you passed\n");
                    break;
        case 'e':
                    printf("you failed\n");
                    break;
        default:
                    printf("invalid grade\n");
                    break;
    }
     if( grade=='a' || grade=='b' || grade=='c')
     {
         printf("you are eligible for the next level");
     }
     else
     {
          printf("you are not eligible for the next level");
     }
    return 0;   
}