#include <bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
    int s = 0;
    int e = letters.size() - 1;

    // Default answer handles wrap-around case
    char findLetter = letters[0];

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (letters[mid] > target) {
            findLetter = letters[mid];  // possible answer
            e = mid - 1;               // try to find smaller valid letter
        } else {
            s = mid + 1;               // move right
        }
    }

    return findLetter;
}

int main() {
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'd';

    char result = nextGreatestLetter(letters, target);
    cout << "Next greatest letter: " << result << endl;

    return 0;
}

