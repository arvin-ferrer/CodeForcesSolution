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
  vi b(n);
  for (int &i : a) cin >> i;
  for (int &i : b) cin >> i;
  int count = 0;
  int diff = 0;
  for (int i = 0; i < n; i++){
    if (a[i] < b[i]){
      count++;
      diff = b[i]-a[i];
    }
  }
  if (count >= 2) cout << "NO\n";
  else{
    bool good = true;
    for (int i = 0; i < n; i++){
      if (abs(a[i]-b[i]) < diff){
        good = false;
      }
    }
    // 1 1 3
    // 2 2 1
    if (good){
      cout << "YES\n";
      return;
    }
    else cout << "NO\n";
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
  //solve();

}
