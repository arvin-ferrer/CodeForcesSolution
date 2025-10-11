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
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;

    ll lo = a[0] - x;
    ll hi = a[0] + x;
    int changes = 0;

    for (int i = 1; i < n; i++) {
        ll new_lo = a[i] - x;
        ll new_hi = a[i] + x;

        lo = max(lo, new_lo);
        hi = min(hi, new_hi);

        if (lo > hi) {
            changes++;
            lo = new_lo;
            hi = new_hi;
        }
    }


  cout << changes << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }
  //solve();

}
