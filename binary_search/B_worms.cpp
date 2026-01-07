/*
  problem description
  https://codeforces.com/problemset/problem/474/B

  solution description
  We are given n piles of worms, where the i-th pile contains a_i worms. The piles are lined up in a row,
  and the worms are numbered sequentially from 1 to the total number of worms across all piles. Specifically,
   the first pile contains worms numbered from 1 to a_1, the second pile contains worms numbered from a_1 + 1 to a_1 + a_2,
    and so on.
  We are also given m queries, where each query consists of a worm number. For each query, we need to determine which pile contains the 
  worm with the given number.
  To solve this problem, we can use a binary search approach. First, we will create a prefix sum array to represent the cumulative number of worms up to each pile. 
  Then, for each query, we will perform a binary search on this prefix sum array to find the pile that contains the worm with the given number.
  Time complexity: O((n + m) log n)
  Space complexity: O(n)








*/

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &piles, vector<int> &worms)
{
  int n = piles.size();
  vector<int> fences;
  int total = 0;
  vector<int> res;
  for (int p : piles)
  {
    total += p;
    fences.push_back(total);
  }

  for (int w : worms)
  {
    int s = 0;
    int e = n - 1;
    int count = 0;
    while (s <= e)
    {
      int mid = s + (e - s) / 2;
      if (fences[mid] >= w)
      {
        count = mid + 1;
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    res.push_back(count);
  }

  return res;
}

int main()
{
  int n;
  cin >> n;

  vector<int> piles(n);
  for (int i = 0; i < n; i++)
  {
    cin >> piles[i];
  }

  int m;
  cin >> m;

  vector<int> worms(m);
  for (int i = 0; i < m; i++)
  {
    cin >> worms[i];
  }

  // passing input into function
  vector<int> res = solve(piles, worms);

  for (int r : res)
  {
    cout << r << " ";
  }

  return 0;
}
