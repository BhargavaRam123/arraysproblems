#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 1, 2, 3, 3, 3, 3, 3};
    vector<int> countarr;
    int count = 1;
    int value = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        // cout << value << endl;
        value = value ^ arr[i];
        if (value == 0)
        {
            count++;
            value = arr[i];
        }
        else
        {
            countarr.push_back(count);
            count = 1;
            value = arr[i];
        }
    }
    countarr.push_back(count);
    for (int i = 0; i < countarr.size(); i++)
    {
        cout << countarr[i] << endl;
    }
    int answer;
    for (int i = 1; i < arr.size(); i++)
    {
        value = value ^ arr[i];
        if (value == 0)
        {
            count++;
            value = arr[i];
        }
        else
        {
            if (count == *max_element(countarr.begin(), countarr.end()))
            {
                answer = arr[i - 1];
            }
            count = 1;
            value = arr[i];
        }
    }
    if (count == *max_element(countarr.begin(), countarr.end()))
    {
        answer = arr[arr.size() - 1];
    }
    if (*max_element(countarr.begin(), countarr.end()) > arr.size() / 2)
        cout << "the answer is:" << answer;
    else
        cout << "there is no majority element";

    return 0;
}