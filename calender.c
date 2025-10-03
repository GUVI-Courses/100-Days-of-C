
#include <stdio.h>
#include <stdlib.h>

int main()

int day, month, year ;
int leapYear = 0; // default leap year

printf("Enter the day : ");
scanf("%d", &day);

printf("Enter the month : ");
scanf("%d", &month);

printf("Enter the year : ");
scanf("%d", &year);

// find that the given year is leap or not

if(month == 2)

if(year % 400 == 0)

leapYear = 1;

else if(year % 400 != 0 && year % 100 == 0)

leapYear = 0;

else if (year % 100 |= 0 && year % 4 == 0)

leapYear = 1 ;

day += 1; // day = day +1

switch (month)

case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10 :
case 12 :
if(day <= 31)
break;

case 4:
case 6:
case 9:
case 2 :

case 11:
if(day <= 30)
break;

if(day <= 29 && leapYear == 1)
break;
else if (day <= 28)
break;

default:
day = 1;
month += 1; //month = month +1
if (month > 12)

month = 1 ;
year += 1;

}

printf(" the next day is : %d/ %d/ %d \n", day, month, year);|

return 0;
}