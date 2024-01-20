#include <stdio.h>

int main() {
    int overallMarks;

    printf("Enter overall marks in the subject: ");
    scanf("%d", &overallMarks);


    switch (overallMarks / 10) {            //Cases in a switch can be in any order
        case 10:                            // 100-90 : A
        case 9:
            printf("Grade: A\n");           // 89 - 80 : B
            break;
        case 8:                             // 79-70 : C
            printf("Grade: B\n");
            break;                          // 69-60 : D
        case 7:
            printf("Grade: C\n");           // Below 60 : F (Fail)
            break;
        case 6:
            printf("Grade: D\n");
            break;
        default:                            //Default is like an "Else" case...
            printf("Grade: F (Fail)\n");
    }

    return 0;
}
  