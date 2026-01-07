


/*
 Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true
 */





#include<bits/stdc++.h>
using namespace std;


bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for(int x : nums){
            if(seen.count(x)){
                return true;
            }
            seen.insert(x);
        }

        return false;
    }


int main(){

  vector<int> nums ={1,2,3,1};

  bool result = containsDuplicate(nums);

  cout<<result<<endl;



  return 0;
}
