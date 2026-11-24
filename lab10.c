
#include <stdio.h>
#include <time.h>

// Function to check whether a year is a leap year
int isLeapYear(int year)
{
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0)){
        return 1;
        }
    else {
        return 0;
    }
}

// Function to find the first weekday of a month
int getFirstDay(int year, int month)
{
    struct tm date = {0};

    date.tm_year = year - 1900;
    date.tm_mon = month;
    date.tm_mday = 1;
    date.tm_isdst = -1;

    mktime(&date);

    return date.tm_wday;
}

// Function to print the calendar
void printCalendar(int year)
{
    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int days[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    // Adjust February for leap year
    if (isLeapYear(year))
        days[1] = 29;

    printf("\n          CALENDAR %d\n", year);

    // Loop through all 12 months
    for (int month = 0; month < 12; month++)
    {
        int firstDay = getFirstDay(year, month);

        printf("\n\n       %s %d\n", months[month], year);

        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        // Print blank spaces before the first date
        for (int i = 0; i < firstDay; i++)
        {
            printf("    ");
        }

        // Print all dates of the month
        for (int day = 1; day <= days[month]; day++)
        {
            printf("%4d", day);

            // Move to the next line after Saturday
            if ((firstDay + day) % 7 == 0)
                printf("\n");
        }

        // Move to the next line if the last week is incomplete
        if ((firstDay + days[month]) % 7 != 0)
            printf("\n");
    }
}

// Main function
int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d", &year);

    if (year < 1)
    {
        printf("Invalid year!\n");
        return 0;
    }

    printCalendar(year);

    return 0;
}
