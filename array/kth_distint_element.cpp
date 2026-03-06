
#include <bits/stdc++.h>
using namespace std;

int kthDistinct(vector<int> &arr, int k)
{
    unordered_map<int, int> freq;
    for (int num : arr)
    {
        freq[num]++;
    }

    for (int num : arr)
    {
        if (freq[num] == 1)
        {
            k--;
            if (k == 0)
            {
                return num;
            }
        }
    }
    return -1; // Return -1 if there is no kth distinct element
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4, 2, 3, 7};
    int k = 3;
    int result = kthDistinct(arr, k);
    if (result != -1)
    {
        cout << "The " << k << "th distinct element is: " << result << endl;
    }
    else
    {
        cout << "There is no " << k << "th distinct element." << endl;
    }

    return 0;
}