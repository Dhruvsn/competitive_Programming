#include <bits/stdc++.h>
using namespace std;

void movesZeros(vector<int> &nums)
{
    int n = nums.size();
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    movesZeros(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }
}