#include<bits/stdc++.h>
using namespace std;


vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n,0);
        stack<int> st;

        ans[n-1] = prices[n-1];
        st.push(prices[n-1]);

        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top()>prices[i]){
                st.pop();
            }
            
            if(!st.empty()){
                ans[i] = prices[i] - st.top();
            }else{
                ans[i] = prices[i];
            }

            st.push(prices[i]);
        }

        return ans;
    }
