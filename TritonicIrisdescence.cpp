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
  string s;
  cin >> n >> s;
  if (n == 2){
    if (s[0] != '?' && s[1] != '?'){
      cout << "NO\n";
      return;
    }
    else{
      cout << "YES\n";
      return;
    }

  }
  bool good = true;
  for (int i = 1; i < n; i++){
    if (s[i] == '?') continue;
    if (s[i] == s[i-1]) good = false; 
  }
  if (good){
    bool stat = false;
    if (s[n-1] == '?' || s[0] == '?') {
      cout << "YES\n";
      return;
    }
    else{
      for (int i = 1; i < n; i++){
        if (s[i] == '?' && s[i-1] == '?'){
          cout << "YES\n";
          return;
        }
        if (s[i] == '?' && s[i-1] == s[i+1]) stat = true;
      }
    }
    if (stat) cout << "YES\n";
    else cout << "NO\n";
  }
  else cout << "NO\n";

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
