//To write a program to take number of days and first day of month as input and to print the
#include <stdio.h>

int main() {
    int n = 31, startDay = 7;  
    int d = 1, d2 = 0;

    printf("S   M   T   W   T   F   S   \n");

    // Printing leading spaces for the starting day
    for (int i = 1; i < startDay; i++) {
        printf("    ");
        d2++;
    }

    // Printing the days of the month
    for (int i = 0; i < n; i++) {
        if (d2 % 7 == 0 && d2 > 0) {
            printf("\n");
        }

        if ((d + i) < 10) {
            printf("%d   ", d + i);
        } else {
            printf("%d  ", d + i);
        }
        d2++;
    }

    return 0;
}
