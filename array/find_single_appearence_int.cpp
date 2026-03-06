#include <bits/stdc++.h>
using namespace std;

// int checkSingleAppearenceInt(vector<int> &arr)
// {

//     int n = arr.size();
//     int ans = 0;

//     for (int i = 0; i < n; i++)
//     {
//         ans ^= arr[i];
//     }

//     return ans;
// }

// second approach

// function to find the two single appearence number in an array
vector<int> multipleSingleAppearenceNum(vector<int> &arr)
{
    int xorAll = 0;

    // Step 1: XOR all numbers
    for (int num : arr)
    {
        xorAll ^= num;
    }

    // Step 2: Find rightmost set bit
    int rightmostSetBit = xorAll & (-xorAll);

    int num1 = 0;
    int num2 = 0;

    // Step 3: Divide into two groups
    for (int num : arr)
    {
        if (num & rightmostSetBit)
        {
            num1 ^= num;
        }
        else
        {
            num2 ^= num;
        }
    }

    return {num1, num2};
}
int main()
{
    vector<int> arr = {1, 2, 1, 3, 2, 5};
    vector<int> res = multipleSingleAppearenceNum(arr);

    for (int x : res)
    {
        cout << x << " ";
    }
    return 0;
}