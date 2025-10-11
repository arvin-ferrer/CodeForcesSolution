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
  vector <string> pokemon ={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
  string s;
  cin >> n >> s;
  vi idx;
  for (int i = 0; i < n; i++){
    if (s[i] != '.')
      idx.push_back(i);
  }
  for (int i = 0; i < 8; i++){
      if (s.size() != pokemon[i].size()) continue;
      bool match = true;
        for (int j = 0; j < idx.size(); j++){
          if (pokemon[i][idx[j]] != s[idx[j]]){
            match = false;
            break;
          } 
        }
      
    if (match) {
      cout << pokemon[i] << endl;
      return;
      }
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
