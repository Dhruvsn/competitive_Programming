
#include<bits/stdc++.h>
using namespace std;


class Solution{

  public:
    int singleNonDuplicate(vector<int>& arr){
    int low = 0;
    int high = arr.size()-1;

    while(low < high){
      int mid = low + (high - low)/2;
      if(((mid&1) && arr[mid] == arr[mid+1]) ||(!(mid&1)) && nums[mid] == nums[mid-1]){
        low = mid + 1;
      }else{
        high = mid;
      }
    }

    return nums[high];
  }



};
