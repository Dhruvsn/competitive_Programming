

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        int i =0;
        while(i<n-1){
            if(arr[i] == 0){
                shiftArr(i,arr);
                i+=2;
            }
            i++;
        }

    }

    void shiftArr(int i , vector<int>& arr){
        int e = arr.size()-1;
        int pos = e -1;
        
        while(i<pos){
            arr[e] = arr[pos];
            e--;
            pos--;
        }
        arr[e] = 0;
    }
};

int main(){

  vector<int> arr = {0,4,1,0,0,8,0,0,3};
  Solution obj;
  obj.duplicateZeros(arr);

  for(int x : arr){
    cout<<x<<" ";
  }
  return 0;
}
