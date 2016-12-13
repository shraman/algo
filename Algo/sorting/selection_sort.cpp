#include <iostream>

void swap(int A[], int i, int j){
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

void selectionsort(int A[],int n){
  for(int j = 0; j < n-1 ; j++ ){
    int min_i = j;
    for(int i = j; i < n ; i++ ){
      if( A[i] < A[min_i]) min_i = i;
    }
    swap(A,min_i,j);
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
  selectionsort(A,6);
  printArray(A,6);
}