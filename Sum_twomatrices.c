//Matrix addition of two matrices
//Time complexity O(n square)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns of square matrix\n");
    scanf("%d",&n);
    int arr[n][n],arr2[n][n];
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          sum+=arr[i][j]+arr2[i][j];
        }
    }
    printf("The addition of matrix is %d",sum);
    return 0;
}
    
    
  