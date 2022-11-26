#include <iostream>
#include <random>
#include <time.h>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define MAX_SIZE 10000
void quickSort(vector<int> &vec, int low, int high);
int main()
{
  int j;
  std::vector<int> vec;
  srand(time(NULL));
  for (j = MAX_SIZE; j <= 10 * MAX_SIZE; j = j + MAX_SIZE)
  {

    for (int i = 0; i < j; i++)
    {
      vec.push_back(rand() % 200);
    }
  //  cout<<"Unsorted data"<<endl;
  //   for(int i=0;i<j;i++){
  //   cout<<vec[i]<<endl;
  //   }
    auto start = high_resolution_clock::now();
   quickSort(vec, 0, j - 1);
    auto stop = high_resolution_clock::now();
// cout<<"sorted data"<<endl;
//     for(int i=0;i<j;i++){
//     cout<<vec[i]<<endl;
//     }
    auto duration = duration_cast<microseconds>(stop - start);
    cout << " (Quick Sort) Time taken by function: "
         << duration.count()/1000<< " milliseconds" << " for the "<<j<<" values"<<endl;
  }
}