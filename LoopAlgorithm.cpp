
#include "LoopAlgorithm.h"
using namespace std;

void LoopAlgorithm::RunAlgorithm(int * arr, int size, int x, int y)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i;j < size; j++)
        {
            if (arr[i]+arr[j] == x)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}