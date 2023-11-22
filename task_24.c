// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

int main() {
    int sec, seconds, minutes, hours;
    sec = 25300;
    hours = sec / 3600;
    minutes = (sec - (3600 * hours)) / 60;
    seconds = (sec - (3600 * hours) - (minutes * 60));

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}