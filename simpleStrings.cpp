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
  cin >> s;   //ABABABABABA
  int n = s.size();//babb //BABACADDEEFF
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      for (char c = 'a'; c <= 'z'; c++) {
        if (c != s[i - 1] && (i + 1 == n || c != s[i + 1])) { //NOTE loop from a-z see if s[i-1] != c or s[i+1] !=c 
          s[i] = c;     //i+1 for cases "baa" where the two adjacent pairs are at the end
          break;
        }
      }
      }
  }
  cout << s << '\n';

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
