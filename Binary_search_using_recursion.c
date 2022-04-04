//binary search using recursion
#include <stdio.h>
int binary_search(int array[], int low, int high, int key)
{
    if(low==high)
    {
        if(array[low]==key)
        return low;
        else
        return 0;
    }
    else
    {
        int mid=(low+high)/2; //mid is taken as an integer so on division it will be considering only the integer part for index 
        if(key==array[mid])
        return mid;
        if(key<array[mid])
        return binary_search(array,low,mid-1,key);
        else
        return binary_search(array,low,mid+1,key);
    }
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70,80};
   int n = 8;
   int key = 9;
   int position = binary_search(array, 0, n-1, key);
   if(position == 0 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d and position %d",position,position+1);
   }
   return 0;
}
