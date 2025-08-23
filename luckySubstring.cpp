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
  int four = 0;
  int seven = 0;
  int first = -1;

  for (int i = 0; i < s.size(); i++){
    if (s[i] == '4'){
      four++;
    }
    else if (s[i] == '7') {
      seven++;
      }
  }

  if (four == 0 && seven == 0) cout << -1 << endl;
  else if (four >= seven) cout << 4 << endl;
  else cout << 7 << endl;

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
