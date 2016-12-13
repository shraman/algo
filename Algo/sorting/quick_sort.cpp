#include <iostream>
#include <vector>

// Is quick sort stable?
// Nope


using namespace std;

void swap(int A[],int i,int j){
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;
}

int partition(int A[],int low, int high){
  int pivot = A[high];
  int j = 0;
  // place all elements below pivot to the left of pivot
  for(int i=low;i<high;i++){
    if(A[i] < pivot){
      swap(A,i,j);
      j++;
    }
  }
  swap(A,j,high);
  return j;
}

void quicksort(int A[], int low, int high){
  if(low<high){
    int pivot = partition(A,low,high);

    quicksort(A,low,pivot-1);
    quicksort(A,pivot+1,high);
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
  quicksort(A,0,5);
  printArray(A,6);
}