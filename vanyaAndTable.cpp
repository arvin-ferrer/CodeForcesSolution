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
  int t, sx, sy, ex, ey;
  string s;
  cin >> t >> sx >> sy >> ex >> ey;
  cin >> s;
  //10 5 3 3 6
  //NENSWESNEE
  int count = 0;

  for (char c: s){
    if (sx == ex && sy == ey){
      cout << count << endl;
      return;
    }
    if (c == 'N' && sy < ey) {
      sy++;
    }
    else if (c == 'S' && sy > ey){
      sy--;
    }
    else if (c == 'E' && sx < ex){
      sx++;
    }
    else if (c == 'W' && sx > ex) {
      sx--;
    }
    count++;
    if (sx == ex && sy == ey){
      cout << count << endl;
      return;
    }
  }

  cout << -1 << endl;
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
