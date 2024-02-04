//To find the Transpose matrix of the given matrix
#include<stdio.h>

int main()
{
    //To input the number of rows and columns
    int r, c, temp;
    printf("Enter the number of rows and columns in the first matrix: ");
    scanf("%d %d", &r, &c);

    //For matrix transpose the matrix must a square one.
    if(r==c)
    {
        //Initialising the two matrices and taking input
        int m1[r][c];
        
        printf("Enter the Elements of the matrix: ");
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        //To find the Transpose of the matrix
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i<j)
                {    
                    temp = m1[i][j];
                    m1[i][j] = m1[j][i];
                    m1[j][i] = temp;
                }
            }
        }
        
        //To print the Transpose
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                printf("%d\t", m1[i][j]);
            }
            printf("\n");
        }
    }
}
