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
  //10 5
  //red will only increase it
  int moves = 0;
  if (n > m){
    cout << (n-m) << endl;
    return;
  }
  while(m > n){
    if (m % 2 == 0){
      m/=2;
    }
    else{
      m+=1;
    }
    moves++;
  }
  moves+=(n-m);
  cout << moves << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // int t;
  // cin >> t;
  // while(t--){
  //  solve();
  // }
  solve();

}
