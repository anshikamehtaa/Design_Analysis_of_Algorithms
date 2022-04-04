//binary search using iteration
#include <stdio.h>
int binary_search_iteration(int array[], int low, int high, int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2; //mid is taken as an integer so on division it will be considering only the integer part for index 
        if(key==array[mid])
        return mid;
        if(key<array[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70,80};
   int n = 8;
   int key = 56;
   int position = binary_search_iteration(array, 0, n-1, key);
   if(position == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d and position %d",position,position+1);
   }
   return 0;
}
