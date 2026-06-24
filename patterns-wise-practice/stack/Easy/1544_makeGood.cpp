#include <bits/stdc++.h>
using namespace std;


string makeGood(string s) {
        stack<int> st;
        
        for(char ch : s){
            if(!st.empty() && abs(st.top() - ch) == 32){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string res;

        if(st.empty()) return "";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }

        reverse(res.begin(),res.end());
        return res;

}

int main(){

  string s = "leEeetcode";

  string res = makeGood(s);

  if(res == "") cout<<"empty string!"<<endl;
  else cout<<res<<endl;

  return 0;
}
