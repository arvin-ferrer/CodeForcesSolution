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
  int k;
  cin >> s >> k;
  vi letters(26,0);
  for (char c: s){
    letters[c-'a']++;
  }
  int unique = 0;
  int duplicates = 0;
  for (int i: letters){
    if (i >= 1)
      unique++;
    if (i > 1){
      duplicates += i-1;
    }
  }
  if (s.size() < k)
    cout << "impossible\n";
  else{
    if (unique >= k)
      cout << 0 << endl;
    else{
      int change = k-unique;
      if (duplicates >= change){
        cout << change << endl;
      }
      else{
        cout << "impossible\n";
      }
    }
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
