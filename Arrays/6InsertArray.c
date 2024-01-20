//To insert a value 'm' at position 'n' in an array.
#include<stdio.h>

int main()
{
    //Number of array elements
    int l;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&l);
    
    //To input elements
    int a[l +1];
    for(int i=0; i<l; i++)
    {
        scanf("%d",&a[i]);
    }

    //To input the new element's position and value
    int m,n;
    printf("\nEnter the new element's value: ");
    scanf("%d",&m);
    printf("\nEnter the new element's position: ");
    scanf("%d",&n);
    
    //To append the element
    for(int i=l-1; i>=n; i--)
    {
        a[i+1]=a[i];
        printf("%d",a[i+1]);
    }
    a[n]=m;
    
    //To print the new array
    for(int i=0; i<l+1; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
