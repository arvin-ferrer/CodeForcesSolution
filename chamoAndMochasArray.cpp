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
  for (int &i : a) cin >> i;
  // sort(a.begin(), a.end());
  if (n == 2){
    cout << min(a[0], a[1]) << endl;
    return;
  }
  else{
    int mx = min(a[0], a[1]);
    for (int i = 0; i <= n - 3; i++) {
        vi tmp = {a[i], a[i + 1], a[i + 2]};
        sort(tmp.begin(), tmp.end());
        mx = max(mx, tmp[1]);  // median
    }
    cout << mx << endl;
  }
  // cout << a[n-2] << endl;
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
