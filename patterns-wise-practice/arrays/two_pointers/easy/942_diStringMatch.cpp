
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  // T.C: O(n) , S.C: O(n).
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> perm;
        int low =0;
        int high = n;

        for(int ch : s){
            if(ch == 'I'){
                perm.push_back(low);
                low++;
            }else{
                perm.push_back(high);
                high--;
            }
        }

        perm.push_back(low);

        return perm;
    }
};
