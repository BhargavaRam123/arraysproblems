#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, -3, 2, -1, 5};
    int start = 0, end = arr.size() - 1;
    // for (int i = 0; i <= end;)
    // {
    //     if (arr[i] < 0)
    //     {
    //         swap(arr[i], arr[start]);
    //         i++;
    //         start++;
    //     }
    //     else
    //     {
    //         swap(arr[i], arr[end]);
    //         // i++;
    //         end--;
    //     }
    // }

    // another method to solve this problem
    while (start < end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else if (arr[end] > 0)
        {
            end--;
        }
        else
        {
            swap(arr[start], arr[end]);
        }
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}