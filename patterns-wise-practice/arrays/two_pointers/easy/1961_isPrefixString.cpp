

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int i = 0;

    for(string word : words){

        for(int j = 0; j < word.size(); j++){

            if(i == s.size()) return false;

            if(s[i] != word[j]) return false;

            i++;
        }

        if(i == s.size()) return true;
    }

    return false;
    }
};
