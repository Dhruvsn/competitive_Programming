

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    int n = nums.size();
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

int main()
{

    vector<int> arr = {1, 0, 1};
    moveZeroes(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}