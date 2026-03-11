#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // T.C  :; O(nlogn + mlogm + n + m) = O(nlogn + mlogm) , S.C : O(n) for st vector
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end()); // T.c: O(nlogn)
        sort(s.begin(), s.end()); // T.c: O(mlogm)
        int i = 0;
        int j = 0;
        int n = g.size();
        int m = s.size();
        int cnt = 0;
        vector<int> st;
        while (i < n && j < m) // T.c: O(n+m)
        {
            if (s[j] >= g[i])
            {
                st.push_back(g[i]);
                i++;
            }
            j++;
        }

        return st.size();
    }

    // optimized approach

    int findContentchildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i = 0;
        int j = 0;
        int n = g.size();
        int m = s.size();
        int cnt = 0;
        while (i < n && j < m)
        {
            if (s[j] >= g[i])
            {
                cnt++;
                i++;
            }
            j++;
        }

        return cnt;
    };
};