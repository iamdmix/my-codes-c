// To print frequency of an element in an array.
#include<stdio.h>

int main()
{
    // To input number of elements of the array.
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n");

    // To input the array.
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //To find frequency of each element.
    for(int i=0; i<n; i++)
    {
        int freq=1; //Initializing frequency of each element to 1.
        int flag=1; //To ensure each ele prints only once.
        for(int j=i+1; j<n;j++)
        {
            if(a[i]==a[j])
            {
                freq++; 
            }
        }
        for(int j=0; j<i; j++)
        {
            if(a[i]==a[j])
            {
                flag=0; //Makes flag false to prevent multi print
            }   
        }
        if(flag) //(We can say)flag=1, indicates first occurance.
        {
            printf("Frequency of %d is %d\n", a[i],freq);
        }
    }
return 0;
}
