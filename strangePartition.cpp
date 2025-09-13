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
  ll n;
  ll k;
  cin >> n >> k;
  vll arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  ll sum = 0;
  ll max = 0;
  for (int i = 0; i < n; i++){
    sum += arr[i];
    max+= ceil(1.0*arr[i] / k);
  }
  cout << (ll)ceil(1.0*sum/k) << " " << max << endl;
  
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
