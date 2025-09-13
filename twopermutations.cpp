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
  int n, a, b;
  cin >> n >> a >> b;
  if (n == a && n == b && a == b) cout << "YES\n";
  else if (a+b+2 <= n) cout << "YES\n";
  
  else cout << "NO\n";
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
