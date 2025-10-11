/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef vector <string> vs;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;

void solve(){
  int n, m;
  cin >> n >> m;
  vs poland(n);
  vs enemy(m);
  //a b //
  //a c 
  int same = 0;
  for (int i = 0; i < n; i++){
    cin >> poland[i];
  }
  for (int i = 0; i < m; i++){
    cin >> enemy[i];
  }

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (poland[i] == enemy[j]){
        same++;
      }
    }
  }
  //a b c d 
  //a b c d e
  // if (n == 1 and m == 1 and same == 0) cout << "NO\n";
   if (n > m || (same % 2 == 1 && n >= m))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  


}
