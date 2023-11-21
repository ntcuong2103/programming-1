#include <time.h>

void sprint_time(char* outstr, struct tm* info)
{

}

void sprint_date(char* outstr, struct tm* info)
{

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

    return 0;
}