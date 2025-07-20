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
  cin >> n >> m;
  if (n == 1 || m == 1)
    cout << "NO\n";
  else if (n <= 2 && m <= 2)
    cout << "NO\n";
  else 
    cout << "YES\n";
  // 2 2
    //3 2
    // 2 3
    // 1 2
    // 9 5
  
  // 5 6
  // 1 5

  // 1 2
  // 3 3 3
  // 3 3 3
  // 3 3 3
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
