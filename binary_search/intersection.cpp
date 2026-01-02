

/*
349. Intersection of Two Arrays
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 

Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000



*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Your function
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums2.begin(), nums2.end());   // only nums2 is searched
    set<int> result;

    for (int x : nums1) {
        int s = 0;
        int e = nums2.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums2[mid] == x) {
                result.insert(x);  // set handles uniqueness
                break;             // stop immediately
            }
            else if (nums2[mid] < x) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
    }

    return vector<int>(result.begin(), result.end());
}

int main() {
    // Sample inputs
    vector<int> nums1 = {4, 9, 5, 4};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    // Call the function
    vector<int> combined = intersection(nums1, nums2);

    // Display the results
    cout << "Intersection: [ ";
    for (int num : combined) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}

