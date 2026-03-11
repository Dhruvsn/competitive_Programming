#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // T.C O(n) S.C O(n)
    vector<int> shortestToChar(string s, char c)
    {
        int n = s.size();
        vector<int> res(n);
        int prev = -n;
        for (int i = 0; i < n; i++) // T.C O(n)
        {
            if (s[i] == c)
            {
                prev = i;
            }
            res[i] = i - prev;
        }

        prev = 2 * n;
        for (int i = n - 1; i >= 0; i--) // T.C O(n)
        {
            if (s[i] == c)
            {
                prev = i;
            }
            res[i] = min(res[i], prev - i);
        }

        return res;
    }
};