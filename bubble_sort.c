#include <stdio.h>
void bubbleSort(int arr[], int size)
 {
     for (int i= 0;i<size - 1;i++) {
       for (int j = 0; j< size -j- 1;j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
void printArray(int arr[], int size) 
{
  for (int i = 0; i < size; i++) 
  {
    printf("%d  ", arr[i]);
  }
}

int main() {
  int arr[] = {20,67,19,88,45,30,83};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
  printf("Sorted Array is\n");
  printArray(arr, size);
}