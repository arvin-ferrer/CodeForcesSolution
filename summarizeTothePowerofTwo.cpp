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
  vi a(n);
  for (int &i: a) cin >> i;
  vector <bool> used(n, false);
  if (n == 1){
    cout << 1 << endl;
    return;
  }
  for (int i = 0; i < n; i++){
    if (used[i]) continue;
      for (int j = 0; j < n; j++){
        if (i != j && !used[j]){
          int sum = a[i] + a[j];
          if ((sum & (sum - 1)) == 0){
            used[i] = true;
            used[j] = true;
            break;
          }
        }
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++){
    if (!used[i]) count++;
  }
  if (count == 0) cout << 0 << endl;
  else
    cout << count-1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // int t;
  // cin >> t;
  // while(t--){
  //  solve();
  // }
  solve();

}
