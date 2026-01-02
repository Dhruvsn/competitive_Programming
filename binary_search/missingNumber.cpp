


#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int left = 0, right = nums.size();

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == mid) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}


int main(){

    vector<int> nums = {1,0,3};

    int res = missingNumber(nums);

    cout<<res;




  return 0;
}
