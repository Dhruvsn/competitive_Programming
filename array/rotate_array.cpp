
#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int s, int e)
{

    int temp = 0;
    while (s < e)
    {
        temp = nums[s];
        nums[s] = nums[e];
        nums[e] = temp;
        s++;
        e--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

int main()
{

    vector<int> arr = {-1, -100, 3, 99};

    rotate(arr, 2);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
