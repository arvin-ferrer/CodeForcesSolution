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
  int start = 0, prev = 0;
  int mxD = INT_MIN, lastR = -1;
  
  if (n == 1){
    if (s[0] == 'R'){
      cout << 1 << endl;
      return;
    }
    else{
      cout << 2 << endl;
      return;
    }
  }
  for (int i = n-1; i >= 0; i--){
    if (s[i] == 'R'){
      lastR = i;
      break;
    }
  }

  for (int i = 0; i <= lastR; i++){
    if (s[i] == 'R'){
      mxD = max(i+1-prev, mxD);
      prev = i+1;
    }
  } 
  if (lastR == -1){
    cout << n+1 << endl;
    return;
  }
  cout << max(n-lastR, mxD) << endl;

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
