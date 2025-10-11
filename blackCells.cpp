/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;


void solve(){
  int n;
  cin >> n;
  vll a(n);
  for (auto &i: a) cin >> i;
  ll mx = INT_MIN;
  if (n % 2 == 0){
    for (int i = 1; i < n; i+=2){
      mx = max(abs(a[i] - a[i-1]), mx);
    }
    cout << mx << endl;
    return;
  }
  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  else{
      ll min_k = LLONG_MAX;
        for (int skip = 0; skip < n; ++skip) {
          ll max_diff = 0;
          bool possible = true;

          vector<bool> used(n, true);
          used[skip] = false;

          for (int i = 0; i < n; ) {
              if (!used[i]) {
                  ++i;
                  continue;
              }
              if (i + 1 < n && used[i + 1]) {
                  max_diff = max(max_diff, abs(a[i + 1] - a[i]));
                  i += 2;
              } else {
                  possible = false;
                  break;
              }
          }

          if (possible) {
              min_k = min(min_k, max_diff);
          }
      }

      cout << min_k << '\n';  
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }


}
