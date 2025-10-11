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
  int n;
  string s;
  cin >> n >> s;
  ll cur = 0;
  vll a;
  for (int i = 0; i < n; i++){
    if (s[i] == 'L'){
      a.push_back((n-1-i)-i);
      cur += i;
    }
    else {
      //RRR
      //2 1 0
      a.push_back(i-(n-1-i));
      cur += (n-i)-1;
    }
  }
  sort(a.begin(), a.end(), greater<int>());
  // cout << cur << endl;
  for (int i = 0; i<n; i++){
    if (a[i] > 0){
      cur+=a[i];
    }
    cout << cur << ' ';
  }
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


}
