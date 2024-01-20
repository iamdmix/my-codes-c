/*
For the if statements, in this code we have made use of the ternary operator
The syntax for the operator is as follows:
Condition ? Do if TRUE : Do if FALSE;
*/
#include<stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d",&age);

    age >=18 ? printf("adult/n") : printf("Not Adult\n"); 

    return 0;
}