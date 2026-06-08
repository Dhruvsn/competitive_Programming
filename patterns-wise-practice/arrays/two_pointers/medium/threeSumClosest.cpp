

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int maxDiff = INT_MAX;
    int sum = 0;

    for(int i = 0; i < n - 2; i++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int s = nums[i] + nums[left] + nums[right];
            int diff = abs(s - target);

            
            if(diff < maxDiff){
                maxDiff = diff;
                sum = s;
            }

            if(s < target){
                left++;
            }
            else if(s > target){
                right--;
            }
            else{
                return s; // exact match
            }
        }
    }

    return sum;
}
};
