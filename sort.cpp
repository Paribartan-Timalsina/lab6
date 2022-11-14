#include<iostream>
#include<vector>
int partition(std::vector<int> & vec,int low,int high){
    int pivot=vec[low];
    int i=low;
    int j=high+1;
    while(i<j){
        while(vec[j]<pivot){
            j=j-1;
        }
         while(vec[i]>pivot){
            i=i+1;
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
void quickSort(std::vector<int> & vec,int low,int high){
    if(low<high){
        int pivot=partition(vec,low,high);
      // std:: cout<<pivot;
        quickSort(vec,low,pivot-1);
        quickSort(vec,pivot+1,high);

    }
}