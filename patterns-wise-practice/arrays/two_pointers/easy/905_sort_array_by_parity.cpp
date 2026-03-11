

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  // Time complexity: O(n) and space complexity: O(n).
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        int x =0;
        vector<int> res(n);
        int s =0;
        int e = n-1;

        for(int x : nums){
            if(x%2==0){
                res[s]=x;
                s++;
            }else{
                res[e] =x;
                e--;
            }
            
        }
        return res;
    }
};
