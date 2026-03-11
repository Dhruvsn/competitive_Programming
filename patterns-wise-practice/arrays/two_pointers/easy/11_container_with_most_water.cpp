

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int n = height.size();
        int max_Val = -n;
        while(i<j){
            int h = min(height[i],height[j]);
            int w = j-i;
            max_Val = max(max_Val,h*w);

            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }

        return max_Val;

    }
};
