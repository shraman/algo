#include <iostream>

void swap(int A[], int i, int j){
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

void bubblesort(int A[],int size){
  for(int j = size - 1; j > 0 ; j-- ){
    for(int i = 1; i <= j; i++ ){
      if( A[i-1] > A[i]) swap(A,i,i-1);
    }
  }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
  int A[] = {2, 4, 6 , 2 , 4 , 5};
  printArray(A,6);
  bubblesort(A,6);
  printArray(A,6);
}