

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool flag = false;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(i != j && arr[i] == 2 * arr[j]){
                return true;
            }
            }

        }

        return flag;
    }


    // using binary search 
   bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int target = 2*arr[i];
            int left =0;
            int right = arr.size()-1;

            while(left<=right){
                int mid = left + (right - left)/2;
                if(arr[mid]==target){
                    if(i!=mid){
                        return true;
                    }else{
                        left = mid +1;
                    }
                }
                else if(arr[mid]<target){
                    left = mid +1;
                }else{
                    right = mid -1;
                }
            }
        }
        return false;
    }

   bool checkIFExit(vector<int>&arr){

     unordered_set<int> st;

     for(int x : arr){
       if(st.count(2*x) || (x%2==0) && st.count(x/2)){
         return true;
       }
       st.insert(x);
     }

     return false;
   }

   bool optimizeSol(vector<int>& arr){

   }


}; 
