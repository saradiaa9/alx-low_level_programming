#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days = 0;
int i;

// Check if year is a leap year
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
days_in_month[2] = 29; // February has 29 days in a leap year
}

// Calculate the total number of days up until the current month
for (i = 1; i < month; i++)
{
days += days_in_month[i];
}

// Add the current day to the total
days += day;

// Print the remaining days in the year
if (month <= 12 && day <= days_in_month[month])
{
printf("Day of the year: %d\n", days);
printf("Remaining days: %d\n", 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 1 : 0) - days);
}
else
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
}
