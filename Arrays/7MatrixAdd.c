//To find the sum of elements of entered two matrices and to print it's sum after assigned to another matrix.
#include<stdio.h>

int main()
{
    //To input the number of rows and columns
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    //Initialising the two matrices and taking input
    int m1[r][c], m2[r][c], m3[r][c];
    
    printf("Enter the Elements of first matrix: ");
    for(int i = 0; i < r; i++)
    {
         for(int j = 0; j < c; j++)
         {
            scanf("%d", &m1[i][j]);
         }
    }

    printf("Enter the Elements of second matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    
    // Adding the two matrices
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Printing the matrix
    printf("The Matrix after Adding is: \n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
