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
  bool ok = true; 
  int mn = INT_MAX;
  for (int i = 0; i < n; i++){
    // int mn = *min_element(a.begin(), a.begin()+i);
    mn = min(a[i], mn);
    if (a[i]-mn >= mn){
      ok = false;
    }
  }
  if (ok) cout << "YES\n";
  else cout << "NO\n";
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
