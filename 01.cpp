/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  s st;
  cin >> st;
  int cnt0 = 0;
  int cnt1 = 0;
  for (int i = 0; i < st.size(); i++){
    if (st[i] == '0') cnt0++;
    else cnt1++;
  }
  if (min(cnt0, cnt1) % 2 != 0) cout << "DA\n";
  else cout << "NET\n";
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
