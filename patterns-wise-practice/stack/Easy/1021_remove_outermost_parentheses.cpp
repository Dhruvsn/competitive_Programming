
#include<bits/stdc++.h>
using namespace std;


/*
  stack = "(()())(())"


 output = ()()

 */

string removeOuterParentheses(string s) {
    string res = "";
    int depth = 0;

    for(char ch : s) {
        if(ch == '(') {
            if(depth > 0)
                res += ch;
            depth++;
        }
        else { // ch == ')'
            depth--;
            if(depth > 0)
                res += ch;
        }
    }

    return res;
}



int main(){
 string s = "(()())(())";
 string res = removeOuterParentheses(s);
  cout<<res<<endl;
  return 0;

}
