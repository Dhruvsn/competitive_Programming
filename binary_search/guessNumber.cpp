

#include <bits/stdc++.h>
using namespace std;

// Global variable to store the picked number
int pick;

// Pre-defined guess API (mock version)
int guess(int num) {
    if (num > pick) {
        return -1;   // num is higher than pick
    }
    else if (num < pick) {
        return 1;    // num is lower than pick
    }
    else {
        return 0;    // num == pick
    }
}

// Function to guess the picked number
int guessNumber(int n) {
    int s = 1;
    int e = n;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        int res = guess(mid);

        if (res == 0) {
            return mid;   // found the answer
        }
        else if (res == -1) {
            e = mid - 1;  // guess is too high
        }
        else {
            s = mid + 1;  // guess is too low
        }
    }

    return -1; // safety return (won't happen)
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Enter picked number: ";
    cin >> pick;

    cout << "Guessed Number: " << guessNumber(n) << endl;

    return 0;
}

