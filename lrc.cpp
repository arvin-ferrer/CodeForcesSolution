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
typedef set <int> si;
void solve(){
  int n;
  cin >> n;
  vi arr(n);
  si nodups;
  for (int  i = 0; i < n; i++){
    cin >> arr[i];
    nodups.insert(arr[i]);
  }
  if (nodups.size() == 1){
    cout << "NO\n";
  }
  else{
    cout << "YES\n";
    int mx = INT_MIN;
    for (int i = 0; i < n; i++){
      mx = max(arr[i], mx);
    }
    for (int i = 0; i < n; i++){
      if (arr[i] == mx) cout << "1 ";
      else cout << "2 ";
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
  cout << endl;

}
