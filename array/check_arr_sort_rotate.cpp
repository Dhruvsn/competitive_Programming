
#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{

    int n = nums.size();
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            count++;
        }
    }

    if (nums[n - 1] > nums[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{

    vector<int> arr = {1, 2, 3};

    bool rest = check(arr);

    cout << (rest ? "true" : "false") << endl;

    return 0;
}