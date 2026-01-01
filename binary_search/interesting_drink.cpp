

#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& prices, vector<long long>& money) {
    // Step 1: sort shop prices
    sort(prices.begin(), prices.end());

    vector<int> result;

    // Step 2: process each day independently
    for (long long m : money) {

        int left = 0;
        int right = prices.size() - 1;
        int count = 0;   // how many shops are affordable

        // Step 3: find the last affordable shop
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (prices[mid] <= m) {
                count = mid + 1;   // shops from 0 to mid are affordable
                left = mid + 1;    // try to afford more expensive shops
            } else {
                right = mid - 1;   // look at cheaper shops
            }
        }

        result.push_back(count);
    }

    return result;
}


int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int q;
    cin >> q;

    vector<long long> money(q);
    for (int i = 0; i < q; i++) {
        cin >> money[i];
    }

    // passing input into function
   vector<int> res =  solve(prices, money);

   for(int r : res){
     cout<<r <<" ";
   }

    return 0;
}

