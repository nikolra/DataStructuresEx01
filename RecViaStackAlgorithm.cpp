
#include "RecViaStackAlgorithm.h"

using namespace std;

void RecViaStackAlgorithm::RunAlgorithm(int* arr, int n, int x, int y)
{
    Stack recStack;

    ItemType curr = ItemType(n, y);
    ItemType next;
    recStack.Push(curr);

    while(!recStack.IsEmpty())
    {
        curr = recStack.Pop();
        if (curr.GetN() == 1 && curr.GetY() != 0)
        {
            if (x == arr[0] + curr.GetY())
            {
                cout << curr.GetY() << " " << arr[0] << endl;
            }
        }
        else if (curr.GetN() != 1 && curr.GetY() !=0)
        {
            if (x == arr[curr.GetN()-1] + curr.GetY())
            {
                cout << curr.GetY() << " " << arr[curr.GetN()-1] << endl;
            }

            next = ItemType(curr.GetN() - 1, curr.GetY());
            recStack.Push(next);
        }
        else if (curr.GetN() != 1 && curr.GetY() == 0)
        {
            next = ItemType(curr.GetN() - 1, arr[curr.GetN()-1]);
            recStack.Push(next);
            next = ItemType(curr.GetN() - 1, 0);
            recStack.Push(next);
        }
    }
}