#include <iostream>
#include <vector>
int partition(std::vector<int> &vec, int low, int high)
{
    // int pivot = vec[low];
    // int count = 0;
    // int i = low, j = high;
    // for (int loop = low + 1; loop <= high; loop++)
    // {
    //     if (vec[loop] <= pivot)
    //     {
    //         count++;
    //     }
    // }
    // int pivotIndex = low + count;
    // int temp = vec[pivotIndex];
    // vec[pivotIndex] = vec[low];
    // vec[low] = temp;
   
    // while (i < pivotIndex && j > pivotIndex)
    // {

    //     while (vec[i] <= pivot)
    //     {
    //         i++;
    //     }

    //     while (vec[j] > pivot)
    //     {
    //         j--;
    //     }

    //     if (i < pivotIndex && j > pivotIndex)
    //     {
           
    //         int temp = vec[i++];
    //         vec[i++] = vec[j--];
    //         vec[j--] = temp;
    //     }
    // }
    // return pivotIndex;
    // select the rightmost element as pivot
  int pivot = vec[low];
  int i = low;
  int j=high;
  while(i<j) {
    while(i<=high&&vec[i]<=pivot){
        i++;
    }
    while(j>=low&&vec[j]>=pivot){
        if(j==low){
            break;
        }
        j--;
    }
    if(i<j){
        int temp=vec[i];
        vec[i]=vec[j];
        vec[j]=temp;
    }
  }
    int temp2=vec[low];
    vec[low]=vec[j];
    vec[j]=temp2;
    return j;
}



void quickSort(std::vector<int> &vec, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(vec, low, high);
        // std:: cout<<pivot;
        quickSort(vec, low, pivot - 1);
        quickSort(vec, pivot + 1, high);
    }
}