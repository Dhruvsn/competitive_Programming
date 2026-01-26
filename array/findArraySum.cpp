
#include <bits/stdc++.h>
using namespace std;

int mergeElement(vector<int> &a)
{
    int n = a.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum * 10 + a[i];
    }

    return sum;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{

    int sum1 = mergeElement(a);
    int sum2 = mergeElement(b);

    int sum = sum1 + sum2;
    vector<int> arr;

    while (sum > 0)
    {
        int digit = sum % 10;
        arr.insert(arr.begin(), digit);
        sum /= 10;
    }

    return arr;
}

int main()
{
    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2};

    vector<int> res = findArraySum(a, 3, b, 3);

    for (int x : res)
    {
        cout << x << " ";
    }

    return 0;
}