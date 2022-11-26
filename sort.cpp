#include <iostream>
#include <vector>
int partition(std::vector<int> & vec, int low, int high)
{
    int pivot = vec[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(vec[j]<=pivot){
            i=i+1;
            int temp=vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
            
        }
    }
    
    int temp2 = vec[i+1];
    vec[i+1] = vec[high];
    vec[high] = temp2;
    return i+1;
}
void quickSort(std::vector<int> & vec, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(vec, low, high);
        // std:: cout<<pivot;
        quickSort(vec, low, pivot - 1);
        quickSort(vec, pivot + 1, high);
    }
}