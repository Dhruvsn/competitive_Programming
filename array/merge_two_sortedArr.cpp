

#include <bits/stdc++.h>
using namespace std;

// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {

//     for (int i = 0; i < m + n; i++)
//     {
//         if (i >= m)
//         {
//             nums1[i] = nums2[i - m];
//         }
//     }

//     sort(nums1.begin(), nums1.end());
// }

// optimal solution

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1; // last valid index of nums1  that store element
    int j = n - 1; // last index of nums2 array
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main()
{
    // vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    // vector<int> arr2 = {2, 5, 6};

    vector<int> arr1 = {1};
    vector<int> arr2 = {};
    int m = 1;
    int n = 0;

    merge(arr1, m, arr2, n);

    for (int x : arr1)
    {
        cout << x << " ";
    }

    return 0;
}
