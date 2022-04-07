#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *timeHelper(int option) 
{

    time_t current = time(NULL);
    struct tm *ptr;             //structure to pull discreet portions of the time_date
    int hour;
    char am_or_pm;
    static char time[100];

    switch(option)
    {
        case 1:
        ptr = localtime(&current);  // local time format pulled
        hour = ptr->tm_hour;
        if (hour < 11)
            am_or_pm = 'a';
        else {
            hour -= 12;
            am_or_pm = 'p';
        }
        if (hour == 0)
            hour = 12;
        snprintf(time, sizeof(time), "%.2d-%.2d-%d %02d:%02d%c\n", ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_year + 1900, hour, ptr->tm_min, am_or_pm);
        break;

        case 2:
        ptr = gmtime(&current);    // gmt time format pulled
        hour = ptr->tm_hour;
        if (hour < 11)
            am_or_pm = 'a';
        else {
            hour -= 12;
            am_or_pm = 'p';
        }
        if (hour == 0)
            hour = 12;
        snprintf(time, sizeof(time), "%.2d-%.2d-%d %02d:%02d%c\n", ptr->tm_mon + 1, ptr->tm_mday, ptr->tm_year + 1900, hour, ptr->tm_min, am_or_pm);
        break;
    }   

    return time;
}
