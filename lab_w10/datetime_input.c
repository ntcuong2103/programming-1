#include <stdio.h>

int main()
{
    printf("Enter the date with following format \"Weekday dd/mm/yyyy\" \n");

    char weekday[10];
    int day, month, year;

    scanf("%s %d/%d/%d", weekday, &day, &month, &year);

    printf("Your entered date: %s, %.2d/%.2d/%.4d", weekday, day, month, year);
    return 0;
}