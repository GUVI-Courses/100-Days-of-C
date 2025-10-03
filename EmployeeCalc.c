#include <stdio.h>
int main()
{
    //salary per hour 
    //total hours in a month
    //total salary of the month = salary * total hours

    float salary;
    int hours;

    printf("Please Enter your salary per hour : ");
    scanf("%f",&salary);

    printf("Please enter your total hours worked in the month: ");
    scanf("%d",&hours);

    printf("Your Expected Salary of the month is %f\n",salary*hours);
    return 0;
}