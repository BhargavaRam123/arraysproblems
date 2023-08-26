#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr{1, 0, 1, 0, 1};
    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i <= end;)
    {

        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
            // i++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}