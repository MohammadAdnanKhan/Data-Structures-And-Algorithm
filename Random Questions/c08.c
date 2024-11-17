//  Write a program that uses structures to represent a Date and Time, and calculates the difference in time between Date-Time instances

#include <stdio.h>

struct DateTime {
    int day, month, year, hours, minutes;
};

void difference(struct DateTime a, struct DateTime b) {
    int yeardiff, monthdiff, daydiff, hoursdiff, minutesdiff;

    // Calculate year difference
    if (b.month > a.month || (b.month == a.month && b.day >= a.day)) {
        yeardiff = b.year - a.year;
    } else {
        yeardiff = b.year - a.year - 1;
    }

    // Calculate month difference
    if (b.month > a.month || (b.month == a.month && b.day >= a.day)) {
        monthdiff = b.month - a.month;
    } else {
        monthdiff = b.month - a.month + 12;
    }

    // Calculate day difference
    if (b.day >= a.day) {
        daydiff = b.day - a.day;
    } else {
        daydiff = b.day - a.day + 30;
        monthdiff--;
    }

    // Calculate hour difference
    if (b.hours >= a.hours) {
        hoursdiff = b.hours - a.hours;
    } else {
        hoursdiff = b.hours - a.hours + 24;
        daydiff--;
    }

    // Calculate minute difference
    if (b.minutes >= a.minutes) {
        minutesdiff = b.minutes - a.minutes;
    } else {
        minutesdiff = b.minutes - a.minutes + 60;
        hoursdiff--;
    }

    // Print the results
    printf("Difference: %d years, %d months, %d days, %d hours, %d minutes\n",
           yeardiff, monthdiff, daydiff, hoursdiff, minutesdiff);
}

int main() {
    struct DateTime dt1, dt2;

    printf("Enter the first date-time which comes before (day month year hours minutes): ");
    scanf("%d %d %d %d %d", &dt1.day, &dt1.month, &dt1.year, &dt1.hours, &dt1.minutes);

    printf("Enter the second date-time which comes after (day month year hours minutes): ");
    scanf("%d %d %d %d %d", &dt2.day, &dt2.month, &dt2.year, &dt2.hours, &dt2.minutes);

    difference(dt1, dt2);

    return 0;
}