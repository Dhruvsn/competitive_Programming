

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> prices(n);   // FIX: allocate space

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> profitTVs;

    for (int price : prices) {
        if (price < 0) {
            profitTVs.push_back(price);
        }
    }

    sort(profitTVs.begin(), profitTVs.end());

    int earnedMoney = 0;
    int taken = 0;

    for (int price : profitTVs) {
        if (taken == m) break;
        earnedMoney += (-price);
        taken++;
    }

    cout << earnedMoney << endl;

    return 0;
}

