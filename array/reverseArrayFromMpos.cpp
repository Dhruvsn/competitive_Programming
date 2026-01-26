#include <iostream>
#include <vector>
using namespace std;

/*
Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0
based indexing so the subarray {5, 6} will be reversed and our
output array will be {1, 2, 3, 4, 6, 5}.
*/

void reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;
    int e = arr.size() - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(vector<int> arr)
{
    cout << "Array before reverse!" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 9, 8, 7, 6};

    print(arr);

    cout << "Array after reverse!" << endl;
    reverseArray(arr, 2);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}