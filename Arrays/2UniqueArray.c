//To print the unique elements of a given array.
#include<stdio.h>

int main()
{
    //To get the number of elements in the array.
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    //To get the elements of the array.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // To find unique elements
    for(int i=0; i<n;i++)
    {
        int Uni =1; // Assuming it is unique
        for(int j=0; j<i; j++)
        {
                if(a[i]==a[j])
                {
                    Uni = 0; // It won't be unique
                    break;
                }
        }
        //To print if unique
        if(Uni)
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}
