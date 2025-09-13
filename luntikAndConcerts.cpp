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
  int a, b, c;
  cin >> a >> b >> c;
  b = b*2;
  c = c*3;
  if ((a+b+c) % 2 == 0){
    cout << 0 << endl;
  }
  else{
    cout << 1 << endl;
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
  //solve();

}
