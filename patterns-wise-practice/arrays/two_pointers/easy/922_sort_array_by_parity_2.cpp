

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // T.C: O(n) , S.C: O(n).
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int oddIdx=1;
        int evenIdx =0;
        vector<int> res(nums.size());

        for(auto &num:nums){
            if(num%2==0){
                res[evenIdx] = num;
                evenIdx+=2;
            }else{
                res[oddIdx] = num;
                oddIdx+=2;
            }
        }

        return res;
    }
};
