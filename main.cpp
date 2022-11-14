#include<iostream>
#include<random>
#include<time.h>
#include<vector>
using namespace std;
#define MAX_SIZE 10
void quickSort(vector<int> &vec,int low,int high);
int main(){
    std::vector<int> vec;
srand(time(NULL));
for(int i=0;i<MAX_SIZE;i++){
vec.push_back(rand()%200);
}
for(int i=0;i<MAX_SIZE;i++){
cout<<vec[i]<<endl;
}
quickSort(vec,0,MAX_SIZE);
cout<<"after sorting"<<endl;
for(int i=0;i<MAX_SIZE;i++){
cout<<vec[i]<<endl;
}
}