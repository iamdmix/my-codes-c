//To print the calendar of a month given the number of days and the first day of the month.
#include<stdio.h>

// int main()
// {
//     //To input the details.
//     int n,d,d1=0;
//     printf("Enter the number of days in the month: ");
//     scanf("%d", &n);
//     printf("\nEnter the first day of the month (1--> Sun and 7--> Sat): ");
//     scanf("%d", &d);
//     printf("S M T W T F S\n");
//     // switch(d)
//     // {
//     //     case 1: for(int i =1; i<=7;i++)
//     //     {
//     //         printf("%d",i);
//     //     }
//     //     case 2: for(int i =d; i<=7;i++)
//     //     {
//     //         printf("%d",i);
//     //     }
//     // }
//     if(d>1)
//     {
//         for(int i=0; i < (2*d-2) ;i++)
//         {
//             printf(" ");
//         }
//     }
//     else if (d==7)
//     {
//         printf("\n");
//     }
//     for(int i=1; i<= 8-d; i++)
//     {
//         if(i>7)
//         {
//             break;
//         }
//         printf("%d ",i);
//         d1++;
//     }
//     printf("\n");
//     int d2 = d1;
//     for(int i = d1+1; i< d1+8; i++)
//     {
//         printf("%d ",i);
//         d2++;
//     }
//     return 0;

// }

int main() {
    int n = 31, d = 1, d2 = 0;
    printf("S   M   T   W   T   F   S   \n");
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