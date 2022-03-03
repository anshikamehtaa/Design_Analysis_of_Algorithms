//Linear search
//Time complexity O(n)
#include<stdio.h>
int main()
{
    int n,key,counter;
    printf("Enter the number of elements to be added in the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to be searched\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        printf("Elements is found at position %d\n",i+1);
        counter+=1;
    }
    if(counter==0)
    {
        printf("Element not found in given array\n");
    }
    
    return 0;
}
    
    
  