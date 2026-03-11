#include <bits/stdc++.h>
using namespace std;

// T
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;
    int n = nums1.size();
    int m = nums2.size();
    int found = INT_MIN;
    vector<int> res;
    while (i < n && j < m)
    {
        if (nums1[i] == nums2[j] && nums1[i] != found)
        {
            res.push_back(nums1[i]);
            found = nums1[i];
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return res;
}

// better solution
// Time complexity: O(n + m) , Space complexity: O(n) 
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s(nums1.begin(), nums1.end());
    vector<int> res;

    for (int num : nums2)
    {
        if (s.count(num))
        {
            res.push_back(num);
            s.erase(num); // avoid duplicates
        }
    }

    return res;
}