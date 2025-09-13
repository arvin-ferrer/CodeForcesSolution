/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  int n, q;
  cin >> n >> q;
  vi arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vi odd_prefix(n + 1);
  odd_prefix[0] = 0;
  for (int i = 0; i < n; i++) {
    odd_prefix[i + 1] = odd_prefix[i] + (arr[i] % 2);
  }

  int l, r, k;
  while (q--) {
    cin >> l >> r >> k;
    int original_odd = odd_prefix[n];
    int odd_in_range = odd_prefix[r] - odd_prefix[l - 1];

    int replacement_odd = (k % 2 == 0) ? 0 : (r - l + 1);
    int total_odd = original_odd - odd_in_range + replacement_odd;

    if (total_odd % 2 != 0)
      cout << "YES\n";
    else
      cout << "NO\n";
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
