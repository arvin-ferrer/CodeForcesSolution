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
  int n, k;
  cin >> n >> k;
  int count = 0;
  int ans = 0;
  vi a(n);
  for (int &i: a) cin >> i;
  for (int i = 0; i < n; i++){
    if (count == k){
      ans++;
      count = 0;
      continue;
    }
    if (a[i] == 0){
      count++;
    }
    else{
      count = 0;  
    }
  }
  if (count == k) ans++;
  cout << ans << endl;
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
