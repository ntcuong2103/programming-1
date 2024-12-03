#include <time.h>

void sprint_time(char* outstr, struct tm* info)
{
    sprintf(outstr, "%02d:%02d:%02d", info->tm_hour, info->tm_min, info->tm_sec);
}

void sprint_date(char* outstr, struct tm* info)
{
    sprintf(outstr, "%02d/%02d/%04d", info->tm_mday, info->tm_mon + 1, info->tm_year + 1900);
}

int main()
{
    time_t current_time = time(NULL);
    struct tm* info = localtime(&current_time);

    // print current time
    info->tm_hour; // hour
    info->tm_min; // minute
    info->tm_sec; // second

    // print current date
    info->tm_mday; // day
    info->tm_mon + 1; // month
    info->tm_year + 1900; // year

    info->tm_wday; // day of the week: 0 -> Sun, 1 -> Mon, ...

    char *days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    // print
    printf("Current time is: %02d:%02d:%02d\n", info->tm_hour, info->tm_min, info->tm_sec);
    printf("Today is: %s, %02d/%02d/%04d\n", days[info->tm_wday], info->tm_mday, info->tm_mon + 1, info->tm_year + 1900);

    // char outstr[100]; // static memory allocation
    char *outstr = (char*)malloc(100); // dynamic memory allocation
    sprint_time(outstr, info);
    printf("Current time is: %s\n", outstr);


    // string concatenation using sprintf
    char *outconcat = (char*)malloc(1000);
    sprintf(outconcat, "Current time is: %s", outstr);
    // get date
    sprint_date(outstr, info);

    sprintf(outconcat, "%s, and today is: %s", outconcat, outstr);
    printf("%s\n", outconcat);

    

    return 0;
}