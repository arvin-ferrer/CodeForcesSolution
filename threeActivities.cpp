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
    int TOP_K = 100;
    vector<pair<int, int>> a(n), b(n), c(n);
    
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        c[i] = {x, i};
    }

    auto cmp = [](auto &x, auto &y) { return x.first > y.first; };
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
    sort(c.begin(), c.end(), cmp);

    int mx = INT_MIN;

    for (int i = 0; i < min(n, TOP_K); ++i) {
        for (int j = 0; j < min(n, TOP_K); ++j) {
            for (int k = 0; k < min(n, TOP_K); ++k) {
                int idx_a = a[i].second;
                int idx_b = b[j].second;
                int idx_c = c[k].second;

                if (idx_a != idx_b && idx_b != idx_c && idx_a != idx_c) {
                    int sum = a[i].first + b[j].first + c[k].first;
                    mx = max(mx, sum);
                }
            }
        }
    }

    cout << mx << '\n';
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
