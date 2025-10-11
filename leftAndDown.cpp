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

void solve() {
  ll a, b, k;
  cin >> a >> b >> k;

  ll g = __gcd(a, b);
  ll dx = a / g;
  ll dy = b / g;

  if (dx <= k && dy <= k) {
    cout << 1 << endl;
  } else {
    cout << 2 << endl;
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
