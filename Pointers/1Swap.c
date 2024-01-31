//Swapping two numbers using both call by value and call by reference
#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter two numbers to swap: ");
    scanf("%d %d", &x, &y);
    swap(x,y);
    printf("In main function: \n");
    printf("x= %d and y= %d\n",x,y);
    _swap(&x,&y);
    printf("In main function: \n");
    printf("x= %d and y= %d\n",x,y);
}
//Call by Value
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("Using Call by Value: \n");
    printf("x= %d and y= %d\n", a ,b);
}

//Call by Reference
void _swap( int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("Using Call by Reference: \n");
    printf("x= %d and y= %d\n", *a, *b);
}
//We can see that CBR has made a change to the actual value of x and y.