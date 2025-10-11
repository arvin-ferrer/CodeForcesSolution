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
  string s;
  cin >> s;
  int mx = 0;
  int count = 0;
  for (int i = 0; i < s.size(); i++){
    if (i != 0 && s[i] == s[i-1]){
      count++;
    }
    else{
      mx = max(count, mx);
      count = 1;
    }
  }
  mx = max(count,mx);
  if (mx >= 7){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
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
