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
  ll n, k, x;
  cin >> n >> k >> x;
  ll min_INT = k * (k + 1) / 2;
  ll max_INT = (2 * n - k + 1) * k / 2;

  ll temp = n;
  ll temp1 = k;
  if (x >= min_INT && x <= max_INT){
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
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
