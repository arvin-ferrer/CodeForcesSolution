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
// ll ipow10(int k) {
//     long long r = 1;
//     while (k--) r *= 10;
//     return r;
// }

void solve(){
  // int n;
  // cin >> n;
  // int range = (n - 1) / 9;
  // int d = (n - 1) % 9 + 1;
  // int k = 2*range + 1;
  // ll block = ipow10(k) + 1;
  // cout << block * d << "\n";
  string s;
  cin >> s;
  cout << s;
  reverse(s.begin(), s.end());
  cout << s << endl;
  //my dumbass tried to use math T^T

  //observations:
  //11, 22, 33, 44, 55, 66, 77, 88, 99, 1001, 1111, 2222, 3333, ...

  //n % 9 == 0 10^n+2

  //11 >= x <= 99
  //10, 1000, 100, 000, 10,000,000
  //10^1 +1, 10^3 +1, 10^5 .. odd powers of 10
  // 1001 - 110 = 891
  //
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
