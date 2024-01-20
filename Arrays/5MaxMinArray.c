//To find the max and min element of the given array
#include<stdio.h>

int main()
{
    //To input the number of elements.
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\n");

    //To get the elements
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //To find the max and the min.
    int M=a[0]; //Initialising the max to a random element.
    int m=a[0]; //Initialising the max to a random element.
    for(int i=0; i<n;i++)
    {
        if(a[i]>M)
        {
            M = a[i];
        }
        if(a[i]<m)
        {
            m= a[i];
        }
    }
    
    // To print the max and the min
    printf("The maximum element is: %d\n",M);
    printf("The minimum element is: %d\n",m);
    return 0;
}
