

#include<bits/stdc++.h>
using namespace std;


 int minOperations(vector<string>& logs) {
        
        int returnMain = 0;
        stack<string> st;
        for(auto& ch : logs){
            st.push(ch);
            
            if( !st.empty() && st.top() == "../"){
                if(returnMain > 0)
                    returnMain--;
               
            }
            else{
                if(ch !="./"){
                    returnMain++; 
                }
            }

        }

        return returnMain;
    }
