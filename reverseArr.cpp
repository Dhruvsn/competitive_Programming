

#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> a)
{
    int n = a.size();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    return a;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> reversedArr = reverseArray(arr);

    cout << "original Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int num : reversedArr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}