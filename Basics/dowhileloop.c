#include<stdio.h>

int main()
{
    int i = 1;
    do
    {                    // This is a type of while loop in which the looping will happen for at least once, 
        printf("Hello World for the %d time",i);                    //while in the other two, looping can happen for 0 times as well.
        i++;
    } while(1<=5);
    return 0;
}