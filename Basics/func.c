#include<stdio.h>

int sum(int a, int b); //function prototype

int main() {
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int s = sum(a,b); //function call 
    
    printf("Sum is %d\n",s);
    return 0;
}
//function definition
int sum(int a, int b) {
    return a+b;
}