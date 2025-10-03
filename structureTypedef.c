#include <stdio.h>
#include <stdlib.h>
//current date -- 1st March 2025
// next date --- 2nd March 2025

typedef struct date{
    int day;
    int month;
    int year;
}Date;

void printDate(Date dt)
{
    printf("year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

void printNextDay(Date dt)
{
    //current day +1
    dt.day = dt.day + 1 ;
    if(dt.day > 31)
    {
        dt.day = 1;
        dt.month++ ;
        if (dt.month > 12)
        {
            dt.month = 1;
            dt.year++;
        }
    }
    printf("The next day is : \n");
    printDate(dt);
}

Date inputDate()
{
    Date dt;
    printf("Enter day(1-31) : " );
    scanf("%d", &dt.day);

    printf("Enter month(1-12) : " );
    scanf("%d", &dt.month);

    printf("Enter year(yy) : " );
    scanf("%d", &dt.year);
    return dt;
}
int main()
{
    Date todayDate = {31,12,2024}; // day -- 23, month--- 12, year ---2014
    printf("Current date : \n");
    printDate(todayDate);
    printNextDay(todayDate);
    
    return 0;
}