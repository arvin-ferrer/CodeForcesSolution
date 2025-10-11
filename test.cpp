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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int curr = 0;
  for (int i = 0; i < n/2; i++){
    if (s[i] != s[n-i-1]){
      cout << s[i] << ' ' << s[n-i-1] << endl;
      curr++; 
    }
  }
  if (curr == k){
    cout << 0 << endl;
  }
  else{
    cout << abs(curr-k) << endl;
  }
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
