//AND--> &&, OR --> ||, NOT --> !

//To Check if a person is above 18 and has a DL to drive
#include<stdio.h>

int main(){

    int age;
    char dl;

    printf("\n\n\t\t###---WELCOME TO ROAD SAFETY PROGRAMME---###\n\n");

    printf("\nPlease enter your age: ");
    scanf("%d", &age);

    if (age>=18){
        printf("\nDo you have a Driving Licence (Y/N) : ");
        scanf("%s", &dl);

        if (dl == 'Y' || dl == 'y'){
            printf("\n\t\tYou are legally allowed to drive.\n\n");

        }else{
            printf("\n\t\tYou are eligible to Apply for a Driving Licence.\n\n");
        
        }
    }else{
        printf("\n\t\tYou are under the legal driving age.\n\n");
    }
    return 0;
}
