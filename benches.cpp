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
  int n, m;
  cin >> n;
  cin >> m;
  vi arr(n);

  int mx = INT_MIN;
  int mn = INT_MIN;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    mx = max(mx, arr[i]);
   }
  for (int i = 0; i < m; i++){
    auto current = min_element(arr.begin(), arr.end());
    (*current)++;
  }
  for (int i: arr){
    mn = max(mn, i);
  }
  cout <<  mn << " " << mx+m << endl;
  //
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  

}
