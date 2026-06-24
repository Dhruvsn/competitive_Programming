

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt1 = 0, cnt0 = 0;

        for (int student : students) {
            if (student == 1)
                cnt1++;
            else
                cnt0++;
        }

        for (int sandwich : sandwiches) {
            if (sandwich == 0) {
                if (cnt0 == 0)
                    return cnt1;
                cnt0--;
            } else {
                if (cnt1 == 0)
                    return cnt0;
                cnt1--;
            }
        }

        return cnt0 + cnt1;
    }
};
