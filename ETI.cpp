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
  bool same = true;
  vi idx;
  for (int i = 0; i < n; i++){
    if (s[i] == '1'){
      idx.push_back(i);
    }
  }
  int diff = idx[1]-idx[0];
  for (int i = 1; i < idx.size(); i++){
    if (idx[i]-idx[i-1] != diff){
      same = false;
      break;
    }
  }
  if (same){
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