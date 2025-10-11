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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n), p(n);
    for (int &x : h) cin >> x;
    for (int &x : p) cin >> x;

    vector<pair<int, int>> monsters(n);
    for (int i = 0; i < n; ++i)
        monsters[i] = {h[i], p[i]};

    // sort by health
    sort(monsters.begin(), monsters.end());

    long long total_damage = 0;
    multiset<int> powers;
    for (int i = 0; i < n; ++i)
        powers.insert(monsters[i].second);

    int idx = 0;
    while (k > 0) {
        total_damage += k;

        // kill monsters whose health ≤ total_damage
        while (idx < n && monsters[idx].first <= total_damage) {
            powers.erase(powers.find(monsters[idx].second));
            idx++;
        }

        if (idx == n) {
            cout << "YES\n";
            return;
        }

        // reduce k by min power of remaining
        k -= *powers.begin();
    }

    cout << "NO\n";
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
