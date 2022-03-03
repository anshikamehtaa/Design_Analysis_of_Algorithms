//Matrix multiplication of two matrices
//Time complexity O(n cube)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns of square matrix\n");
    scanf("%d",&n);
    int arr[n][n],arr2[n][n],result[n][n];
    printf("Enter value of elements of matrix 1\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          scanf("%d",&arr[i][j]); 
        }
    }
    printf("Enter value of elements of matrix 2\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          scanf("%d",&arr2[i][j]); 
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          result[i][j]=0;
          for(int k=0;k<n;k++)
          {
              result[i][j]+=arr[i][k]*arr2[k][j];
          }
        }
    }
    printf("Matrix after multiplication is: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d \n",result[i][j]); 
        }
    }
    return 0;
}
    
    
  