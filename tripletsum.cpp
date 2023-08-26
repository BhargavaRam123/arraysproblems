#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{
        10,
        20,
        30,
        40};
    int ans = 80;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == ans)
                {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                }
            }
        }
    }

    return 0;
}