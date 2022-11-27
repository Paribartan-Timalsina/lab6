#include <iostream>
#include <random>
#include <time.h>
#include <vector>
#include <chrono>
#include <fstream>
using namespace std;
using namespace std::chrono;
#define MAX_SIZE 10000
void quickSort(vector<int> &vec, int low, int high);
int main()
{
    /*
    writing a csv file
    When the time is written in csv file we can easily plot it in graph
    */
    std::fstream file;
    file.open("algorithmTime.csv", std::ios::out | std::ios::trunc);
    file << "Input size,QuickSort time\n";

    for (int j = MAX_SIZE; j <= 40 * MAX_SIZE; j = j + MAX_SIZE)
    {
        srand(time(0));
        vector<int> vec;
        for (int i = 0; i < j; i++)
        {
            int random = rand() % 200;
            vec.push_back(random);
        }

        std::chrono ::steady_clock ::time_point start = std::chrono ::steady_clock ::now();
        quickSort(vec, 0, vec.size() - 1);
        std::chrono ::steady_clock ::time_point stop = std::chrono ::steady_clock ::now();

        auto duration = duration_cast<milliseconds>(stop - start);
        int duration1 = duration.count();
        cout << " (Quick Sort) Time taken by function: "
             << duration1 << " milliseconds"
             << " for the " << j << " values" << endl;
        // writing data in file
        file << j << "," << duration1 << "\n";
        file.flush();
    }
}