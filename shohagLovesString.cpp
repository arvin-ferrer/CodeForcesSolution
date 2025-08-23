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
  int n = s.size();
  // if (n == 2){
  //   if (s[0] == s[1]){
  //     cout << s[0] << s[1] << endl;
  //     return;
  //   }
  //   else{
  //     cout << -1 << endl;
  //     return;
  //   }

  // }
  for (int i = 1; i < n; i++){
    if (s[i] == s[i-1]){
      cout << s[i] << s[i-1] << endl;
      return;
    }
  }
  for (int i = 1; i < n-1; i++){
    if (s[i-1] != s[i]  &&  s[i] != s[i+1] && s[i-1] != s[i+1]){
      cout << s[i-1] << s[i] << s[i+1] << endl;
      return;
    }
  }
  cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }
  //solve();

}
