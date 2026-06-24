
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open;
        stack<int> star;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                open.push(i);
            }
            else if(s[i] == '*') {
                star.push(i);
            }
            else { // ')'

                if(!open.empty()) {
                    open.pop();
                }
                else if(!star.empty()) {
                    star.pop();
                }
                else {
                    return false;
                }
            }
        }

        // Match remaining '(' with stars
        while(!open.empty() && !star.empty()) {

            // Star must come after '('
            if(star.top() > open.top()) {
                star.pop();
                open.pop();
            }
            else {
                return false;
            }
        }

        return open.empty();
    }
};
