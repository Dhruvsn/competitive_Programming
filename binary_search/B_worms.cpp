
#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& piles,vector<int>& worms){
  int n = piles.size();
    vector<int> fences;
    int total = 0;
    vector<int> res;
    for(int p : piles){
          total+=p;
          fences.push_back(total);
    }

    for(int w : worms){
      int s = 0;
      int e = n -1 ;
      int count = 0;
      while (s<=e) {
        int mid = s + (e - s)/2;
        if(fences[mid]>= w){
           count = mid + 1;
           e = mid - 1;
        }
        else{
          s = mid + 1;
        }
        
      }
      res.push_back(count);

    }

    return res;
}





int main() {
    int n;
    cin >> n;

    vector<int> piles(n);
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int m;
    cin >> m;

    vector<int> worms(m);
    for (int i = 0; i < m; i++) {
        cin >> worms[i];
    }

    // passing input into function
   vector<int> res =  solve(piles, worms);

   for(int r : res){
     cout<<r <<" ";
   }

    return 0;
}

