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
  int n, k, r, c;
  cin >> n >> k >> r >> c;
  for (int row = 1; row <= n; row++){
    for (int col = 1; col <= n; col++){
      if ((row + col) % k == (r+c)%k){
        cout << 'X';
      }
      else{
        cout << '.';
      }
  }
  cout << endl;
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
