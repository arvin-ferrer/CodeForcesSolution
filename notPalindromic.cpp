/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int c0 = 0;
  int c1 = 0;
  for (char c: s){
    if (c0 == '0') c0++;
    else c1++;
  }
   int mn = max(c0, c1) - n / 2;
    int mx = c0 / 2 + c1 / 2;
    if(k >= mn && (k - mn) % 2 == 0 && k <= mx) cout << "YES";
    else cout << "NO";
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
