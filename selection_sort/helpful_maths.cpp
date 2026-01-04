#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s; // read input from Codeforces

  vector<int> numbers;

  // extract numbers
  for (int i = 0; i < s.length(); i += 2)
  {
    numbers.push_back(s[i] - '0');
  }

  // sort numbers
  sort(numbers.begin(), numbers.end());

  // put numbers back into string
  int index = 0;
  for (int i = 0; i < numbers.size(); i++)
  {
    s[index] = numbers[i] + '0';
    index += 2;
  }

  cout << s << endl;
  return 0;
}
