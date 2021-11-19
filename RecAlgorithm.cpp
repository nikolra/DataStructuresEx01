
#include "RecAlgorithm.h"

using namespace std;

void RecAlgorithm::RunAlgorithm(int* arr, int n, int x, int y)
{
    if (n == 1 && y != 0)
    {
        if (x == arr[0] + y)
        {
            cout << y <<" " << arr[0] << endl;
        }
    }
    else if (n == 1 && y == 0)
    {
        return;
    }
    else if (n != 1 && y !=0)
    {
        if (x == arr[n-1] + y)
        {
            cout << y << " " << arr[n-1] << endl;
        }
        RunAlgorithm(arr, n - 1, x, y);
    }
    else if (n != 1 && y == 0)
    {
        RunAlgorithm(arr, n - 1, x, arr[n-1]);
        RunAlgorithm(arr, n - 1, x, 0);
    }
}