/*This program will help us understand the true difference between Call by Value and Call By Reference
Here we're creating two functions to calculate area of a sq, but they differ with the Call By techniques.
As we will see ahead, it deeply affects the functioning of the program.*/
#include<stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int s=4;
    square(s);
    printf("s= %d\n",s);

    _square(&s);
    printf("s= %d\n",s);
}

//Function using call by value
void square(int n)
{
    n = n * n;
    printf("Area: %d",n);
}

//Function using call by reference
void square(int *n)
{
    (*n) = (*n) * (*n);
    printf("Area: %d", *n);
}

/*We can notice that the value of 's' has updated in the call by reference (as it's value is being changed in the memory) and 
is not affected in call by value as call by value creates a copy of everything before passing it and thus it doesn't make 
a difference to the original one*/
