#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 0, 0, 2, 2};
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] >= arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}