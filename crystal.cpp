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
//
void solve(){
  ll x;
  cin >> x;
  int d = 63 - __builtin_clzll(x);  
  // answer is 2*d + 3
  cout << (2*d + 3) << "\n";

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
//2 = 2
//3 = 3 [1, 2, 3], [3, 2, 1], []
//4 = [1, 2, 3, 4]
