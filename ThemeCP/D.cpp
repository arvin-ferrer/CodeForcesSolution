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
  int n;
  char c;
  cin >> n >> c;
  string s;
  cin >> s;
  s += s; // duplicate the string to handle cyclicity

  int last = -1;  // index of the last green found
  int ans = 0;

    // Start from the end of the duplicated string
  for (int i = 2 * n - 1; i >= 0; --i) {
      if (s[i] == 'g') {
          last = i;  // update last green seen
      }
      if (i < n && s[i] == c && last != -1) {
          ans = max(ans, last - i);  // only consider positions in the original string
      }
  }

  cout << ans << endl;

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
