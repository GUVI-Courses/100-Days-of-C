#include <stdio.h>
int main()
{
    int grade1 , grade2 ,grade3;
    double average;
    printf("Enter Grade1 ");
    scanf("%d",&grade1);
    printf("Enter Grade2 ");
    scanf("%d",&grade2);
    printf("Enter Grade3 ");
    scanf("%d",&grade3);
    average = (grade1 + (double)grade2 + grade3)/3;
    printf("Average Grade is %f\n",average);
    return 0;
}