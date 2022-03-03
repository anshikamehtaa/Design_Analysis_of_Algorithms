//Matrix addition
//Time complexity O(n square)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows and columns of square matrix\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter value of elements of matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          scanf("%d",&arr[i][j]); 
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          sum+=arr[i][j];
        }
    }
    printf("The addition of matrix is %d",sum);
}