#include<stdio.h>
int selection_sort(int arr[],int size)
{
    
    for(int i=0;i<size-1;i++)
    {
        int min_indx=i;
        for(int j=i+1;j<size;j++)
        {
        if(arr[j]<arr[min_indx])
        min_indx=j;
        }
    int temp=arr[min_indx];
    arr[min_indx]=arr[i];
    arr[i]=temp;
    }
    
}

int main()
{
 int arr[]={10,15,62,78,91,70,72};
 int size=sizeof(arr)/sizeof(arr[0]);
 selection_sort(arr,size);
 printf("Sorted array is\n");
 for(int i=0;i<size;i++)
 {
     printf("%d ",arr[i]);
 }
}



