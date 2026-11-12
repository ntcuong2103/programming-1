#include <stdio.h>
int main() {
    enum days { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

    enum days today = MONDAY;
    enum days tomorrow = today + 1;
    enum days next_week = (today + 7) % 7; // Wrap around to the beginning of the week
    enum days day_after_356_days = (today + 356) % 7; // Wrap around to the beginning of the week


    int var_name;

    // Print the integer values of the enum constants
    printf("MONDAY: %d\n", MONDAY);
    printf("TUESDAY: %d\n", TUESDAY);
    printf("WEDNESDAY: %d\n", WEDNESDAY);
    printf("THURSDAY: %d\n", THURSDAY);
    printf("FRIDAY: %d\n", FRIDAY);
    printf("SATURDAY: %d\n", SATURDAY);
    printf("SUNDAY: %d\n", SUNDAY);


    // print the day after 356 days if today is Monday
    int days_passed = 356;

    enum days day_after_356_days = (MONDAY + days_passed) % 7;

    printf("The day after %d days if today is Monday is: %d\n", days_passed, day_after_356_days);


    // print the day from the enum constant
    if (day_after_356_days == MONDAY) {
        printf("The day is: MONDAY\n");
    } else if (day_after_356_days == TUESDAY) {
        printf("The day is: TUESDAY\n");
    } else if (day_after_356_days == WEDNESDAY) {
        printf("The day is: WEDNESDAY\n");
    } else if (day_after_356_days == THURSDAY) {
        printf("The day is: THURSDAY\n");
    } else if (day_after_356_days == FRIDAY) {
        printf("The day is: FRIDAY\n");
    } else if (day_after_356_days == SATURDAY) {
        printf("The day is: SATURDAY\n");
    } else if (day_after_356_days == SUNDAY) {
        printf("The day is: SUNDAY\n");
    } else {
        printf("Invalid day\n");
    }

    return 0;
}