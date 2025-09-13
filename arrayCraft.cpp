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
  int n, x, y;
  cin >> n >> x >> y;
  vi a(n,-1);
  for (int i = 0; i < x; i++) a[i] = 1;
  for (int i = y-1; i < n; i++) a[i] = 1;
  for (int i = 0; i < n; i++) cout << a[i] << ' ';
  cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }
  //solve();

}
