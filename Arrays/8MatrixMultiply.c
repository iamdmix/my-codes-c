//To input two matrices and to print the output of matrix multiplication of the two matrices.
#include<stdio.h>

int main()
{
    //To input the number of rows and columns
    int r1, c1, r2, c2;
    printf("Enter the number of rows and columns in the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns in the second matrix: ");
    scanf("%d %d", &r2, &c2);

    //For matrix multiplication to occur the condition says: c1==r2.
    if(c1==r2)
    {
        //Initialising the two matrices and taking input
        int m1[r1][c1], m2[r2][c2], m3[r1][c2];
        
        printf("Enter the Elements of first matrix: ");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("Enter the Elements of second matrix: ");
        for(int i = 0; i < r2; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }

        // Initialize the result matrix to zero
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                m3[i][j] = 0;
            }
        }

        //Matrix multiplication logic
        for(int i=0; i< r1; i++)
        {
            for(int j=0; j< c2; j++)
            {
                for(int k=0; k< c1; k++)
                {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        //Display the result matrix
        printf("The resultant matrix is: \n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0; j < c2; j++)
            {
                printf("%d\t",m3[i][j]);
            }
            printf("\n");
        }
    }
    else printf("\nMatrix multiplication cannot be done for the entered indices\n");
    return 0;
}