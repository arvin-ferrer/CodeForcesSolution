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
  int n, m;
  cin >> n >> m;
  int girl = 1;
  int boy = 1;
  vector<pair<int, int>> ans;
   while (girl <= n && boy <= m){
    ans.emplace_back(girl, boy);
    if (boy == m){
      girl++;
    }
    else{
      boy++;
    }
  }
  cout << ans.size() << endl;
  for (auto [g, b] : ans) {
    cout << g << ' ' << b << '\n';
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // int t;
  // cin >> t;
  // while(t--){
   // solve();
  // }
  solve();

}
