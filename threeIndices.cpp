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
  cin >> n;
  vi a(n);
  for (int &i: a) cin >> i;
  bool good = false;
  for (int i = 1; i < n-1; i++){
    if (a[i-1] < a[i] && a[i] > a[i+1]){
      cout << "YES\n";
      cout << i << ' ' << i+1 << ' ' << i+2 << endl;
      good = true;
      break;

    }
  }
  if (!good) cout << "NO\n";
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
