//To segregate the elements of an array based on if they're even or odd (2 seperate arrays)
#include<stdio.h>

int main()
{
    // To input the number of elements
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //To input the array
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    //To seperate them into two arrays (Even and Odd)
    int even[n], odd[n];
    int j=0, k=0;
    for(int i=0; i<n ;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    //To print even elements.
    printf("Even Elements are: \n");
    for(int i=0; i<j; i++)
    {
        printf("%d ",even[i]);
    }
    //To print odd elements.
    printf("\nOdd Elements are:\n");
    for(int i=0; i<k; i++)
    {
        printf("%d ",odd[i]);
    }
    return 0;
}
