/*To Create a pattern like the following:
     1
    212
   32123
  4321234
 543212345*/
 #include<stdio.h>

int main()
{
     //To input number of rows
     int n;
     printf("Enter the number of rows: ");
     scanf("%d", &n);
     printf("\n");
     
     //To iterate through each row
     for(int i=1; i<=n; i++)
     {
          //To print the spaces to the left
          for(int j=n-i; j>=1; j--)
          {
               printf(" ");
          }
          
          //To print the digits in descending order till 1
          for(int j=i; j>=1; j--)
          {
               printf("%d",j);
          }
          
          //To print the digits in ascending order from 2
          for(int j=2; j<=i; j++)
          {
               printf("%d",j);
          }

          //To go to the next line.
          printf("\n");
     }
     return 0;
}  
