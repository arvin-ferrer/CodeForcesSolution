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
  int row, col, x, y, d;
  cin >> row >> col >> x >> y >> d;
  // int distance = abs(row-x)+abs(col-y);
  if (min(x-1, col-y) <= d && min(row-x, y-1) <= d)
    cout << -1 << endl;
  // if (distance <= d || (abs(row-x) <= row || abs(col-x) <)){
  //   cout << -1 << endl;
  // }
  else{
    cout << abs(row-1)+abs(col-1) << endl;
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


}
