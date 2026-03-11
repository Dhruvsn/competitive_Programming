


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int rowSize = image.size();
        int colSize = image[0].size();
        vector<vector<int>> res;

        for(int i=0;i<rowSize;i++){
            flipAndInvert(image[i],image[i].size());
            res.push_back(image[i]);
        }

        return res;

    }

    void flipAndInvert(vector<int>&arr,int size){

        int i =0;
        int j = size-1;

        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

        for(int i=0;i<size;i++){
            if(arr[i]==1){
                arr[i]=0;
            }else{
                arr[i]=1;
            }
        }
    }


};
