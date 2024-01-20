//preprocessor directive
#include<stdio.h>//header file library
/*Multiline 
Comments
Work 
Like 
This*/
int main()
{
    //printf("Hello World\n");
    int num = 25; //first letter of var name must be an alphabet or "_" --> only symbol allowed
    char star[100] = "\tDharmik\nThis a new language for me";//"\\"--> To enter backslash, "\""--> To enter Double Quotes
    const float pi = 3.141599265359; //makes the value unchangable, 3 types : integer, real, character
    printf("The number is: %d",num);//"%d" is a format specifier, %c--> char, %f --> float, %s--> string
    printf("%.3f",pi);//limits to 3 decimal places

    //explicit conversion 
    int n1 = 5;
    int n2 = 2;
    float sum = (float) n1 / n2;
    printf("%f",sum);
    return 0;
}
