/*
  Created by: acferrer
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define endl "\n";


using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
typedef set<int> si;
typedef set<ll> sl;

void solve(){
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; ++i) cin >> a[i];

  if (n == 1) {
    cout << 0 << endl;
    return;
  }

  sort(a.begin(), a.end(), greater<ll>()); 
  ll ans = 0;
  for (int i = 0; i < n; i += 2) ans += a[i];
  cout << ans << endl;
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
