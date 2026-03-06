#include <bits/stdc++.h>
using namespace std;
// 3,4,5,1,2
bool checkSortedArr(vector<int> &arr)
{
    int cnt = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[(i + 1) % n])
        {
            cnt++;
        }
    }

    return cnt <= 1;
}

int main()
{

    return 0;
}