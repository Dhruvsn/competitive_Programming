

#include<bits/stdc++.h>
using namespace std;

vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ops;

        int last = target.back();

        for (int i = 1; i <= last; i++) {
            if (find(target.begin(), target.end(), i) != target.end()) {
                ops.push_back("Push");
            } else {
                ops.push_back("Push");
                ops.push_back("Pop");
            }
        }

        return ops;
    }




int main(){

  return 0;
}
