#include <bits/stdc++.h>
using namespace std;

int longestLengthOf1s(vector<int> &arr)
{
    int n = arr.size();

    int cnt = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxCount = max(maxCount, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return maxCount;
}

int main()
{

    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};

    int res = longestLengthOf1s(arr);

    cout << "Longest length of 1s in arr: " << res << endl;

    return 0;
}