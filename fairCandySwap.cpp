


/*
  888. Fair Candy Swap

  Alice and Bob have a different total number of candies. You are given two integer arrays aliceSizes and bobSizes where aliceSizes[i] is the number of candies of the ith box of candy that Alice has and bobSizes[j] is the number of candies of the jth box of candy that Bob has.

Since they are friends, they would like to exchange one candy box each so that after the exchange, they both have the same total amount of candy. The total amount of candy a person has is the sum of the number of candies in each box they have.

Return an integer array answer where answer[0] is the number of candies in the box that Alice must exchange, and answer[1] is the number of candies in the box that Bob must exchange. If there are multiple answers, you may return any one of them. It is guaranteed that at least one answer exists.

 

Example 1:

Input: aliceSizes = [1,1], bobSizes = [2,2]
Output: [1,2]
Example 2:

Input: aliceSizes = [1,2], bobSizes = [2,3]
Output: [1,2]
Example 3:

Input: aliceSizes = [2], bobSizes = [1,3]
Output: [2,3]
 

Constraints:

1 <= aliceSizes.length, bobSizes.length <= 104
1 <= aliceSizes[i], bobSizes[j] <= 105
Alice and Bob have a different total number of candies.
There will be at least one valid answer for the given input.


*/














#include <iostream>
#include <vector>
#include <numeric>
#include <unordered_set>

using namespace std;

vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    // Calculating sumA using a range-based loop instead of accumulate
    int sumA = 0;
    for (int candy : aliceSizes) {
        sumA += candy;
    }

    // Calculating sumB using a range-based loop
    int sumB = 0;
    for (int candy : bobSizes) {
        sumB += candy;
    }

    // The amount Bob's box must be larger than Alice's box
    int delta = (sumB - sumA) / 2;

    // Use a Hash Set for O(1) average lookup time
    unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

    for (int x : aliceSizes) {
        // We need to find y such that y = x + delta
        if (bobSet.count(x + delta)) {
            return {x, x + delta};
        }
    }

    return {};
}

int main() {
    // Example 1: Alice = [1, 1], Bob = [2, 2]
    // sumA = 2, sumB = 4. Target sum for both is 3.
    // Alice gives 1, Bob gives 2. New totals: Alice(2-1+2)=3, Bob(4-2+1)=3.
    vector<int> alice1 = {1, 1};
    vector<int> bob1 = {2, 2};
    vector<int> result1 = fairCandySwap(alice1, bob1);

    cout << "Example 1 Result: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Example 2: Alice = [1, 2], Bob = [2, 3]
    vector<int> alice2 = {1, 2};
    vector<int> bob2 = {2, 3};
    vector<int> result2 = fairCandySwap(alice2, bob2);

    cout << "Example 2 Result: [" << result2[0] << ", " << result2[1] << "]" << endl;

    return 0;
}
