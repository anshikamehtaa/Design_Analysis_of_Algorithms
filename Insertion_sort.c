#include<stdio.h>
int insertion_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=key;
    }
}
int main()
{
 int arr[]={10,15,62,78,91,70,72};
 int size=sizeof(arr)/sizeof(arr[0]);
 insertion_sort(arr,size);
 printf("Sorted array is\n");
 for(int i=0;i<size;i++)
 {
     printf("%d ",arr[i]);
 }
}