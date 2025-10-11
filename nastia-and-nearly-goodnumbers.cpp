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
  ll a, b;
  cin >> a >> b;
  // cout << "YES\n";
  //let x = gcd(a, b)
  //10 + 5 = 15
  //gcd(a, b) = z-y
  //5, 3
  //15 = 30-15
  //
  //15+15 = 30
  if (b == 1) cout << "NO\n";
  else{
    cout << "YES\n";
    ll x = a*b;
    ll z = a*(b+1);
    ll y = a;
    cout << y << ' ' << x << ' ' << z << endl;
    // cout << gcd(a, b) << ' ' << pow(a, 2) << ' ' << pow(a, 3) << endl;
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
