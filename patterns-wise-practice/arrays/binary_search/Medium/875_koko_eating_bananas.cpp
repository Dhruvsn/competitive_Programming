

#include<bits/stdc++.h>
using namespace std;


class Solution{

public:
  int minEatingSpeed(vector<int>&arr,int h){
      
      int low = 1;
      int high = maxVal(arr);
      int res = -1;
      while (low <= high) {
          
          int mid = low + (high - low)/2;
          int hour = calculateHours(arr,mid);
          if(hour > h){
            low = mid + 1;
          }else{
            res = mid;
            high = mid -1;
            
          }
        
      }
      return res;

      
  }

  long long calculateHours(vector<int>& arr, int speed){
      long long hours = 0;

      for(int bananas : piles){
        hours+= (1LL * bananas + speed -1) / speed;
        
      }
      return hours;
  }

  int maxVal(vector<int>& arr){
    int maxx = INT_MIN;

    for(int x : arr){
        if(x > maxx){
        maxx = x;
       }
    }

    return maxx;
  }


};
