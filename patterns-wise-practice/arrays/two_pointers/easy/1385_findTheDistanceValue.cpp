

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
   // O(mlogm+nlogm) 
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());

        int cnt = 0;

        for(int x : arr1){
            int s = 0;
            int e = arr2.size() - 1;
            bool flag = true;

            while(s <= e){
                int mid = s + (e - s) / 2;

                if(abs(x - arr2[mid]) <= d){
                    flag = false;
                    break;
                }

                if(arr2[mid] < x - d){
                    s = mid + 1;
                } 
                else {
                    e = mid - 1;
                }
            }

            if(flag) cnt++;
        }

        return cnt;
    }
};
