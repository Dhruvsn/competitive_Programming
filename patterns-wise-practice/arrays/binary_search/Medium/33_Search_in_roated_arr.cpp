

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  int search(vector<int>& nums , int target){
    int low = 0 ,high = nums.size()-1;

    while(low < high){
      int mid = low + (high - low)/2;

      if(nums[mid] == target) return mid;
      else if(nums[mid] > target) low = mid;
      else high = mid - 1;
    }

    return -1;
  }
};

  int main(){
    vector<int> arr = {1,3};
    Solution obj;
    
    cout<<obj.search(arr,0)<<endl;

    return 0;
}
