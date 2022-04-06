#include<stdio.h>
#include<stdlib.h>

//low=lowest lesft hand side index for taken array/subarray
//high=hihest right hand side index for taken array/subarray
void merge(int arr[],int mid,int low,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    //creating new sub arrays
    int L[n1],R[n2];
    
    //elements are added like this in new array so that they can work properly even for middle indexes
    for(int i=0;i<n1;i++)
    L[i]=arr[low+i];
    for(int j=0;j<n2;j++)
    R[j]=arr[j+mid+1];
    
    int i=0,j=0;
    int k=low;
    while(i<n1 && j<n2)
     {
         if(L[i]<R[j])
         {
          arr[k]=L[i];
          i++;
         }
         else
         {
             arr[k]=R[j];
             j++;
         }
         k++;
     }
     //adding any remaining values to the array
     while(i<n1)
     {
         arr[k]=L[i];
         i++;
         k++;
     }
     while(j<n2)
     {
         arr[k]=R[j];
         j++;
         k++;
     }
}

void merge_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
void print_array(int A[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int arr[]={20,70,88,10,9,47,81,28};
    int size= sizeof(arr) / sizeof(arr[0]);
    printf("Given array is:\n");
    for(int i=0;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    merge_sort(arr,0,size-1);
    printf("Array after sorting is:\n");
    print_array(arr,size);
    return 0;
}