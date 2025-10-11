/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve() {
   string s;
   cin >> s;
   vi cnt(10, 0);
   for (char c : s) 
      cnt[c - '0']++;

   string ans;
   ans.reserve(10);

   for (int i = 0; i < 10; i++) {
      int need = 10 - (i + 1); 
      for (int d = need; d <= 9; d++) {
          if (cnt[d] > 0) {
              ans.push_back(char('0' + d));
              cnt[d]--;
              break;
          }
      }
  }

  cout << ans << "\n";
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
