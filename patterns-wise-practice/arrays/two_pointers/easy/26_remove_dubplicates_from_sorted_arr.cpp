



#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int j =0;
        int n = nums.size();
        int i =0;
        while(i<n && j<n){
            if(nums[i]!=nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }

        return i+1;
}

int main(){

  vector<int> nums= {1,1,2,3,4,5,5,5};

  int res = removeDuplicates(nums);
  // res = length of array after removing duplicates element.
  cout<<res<<endl;



  return 0;
}
