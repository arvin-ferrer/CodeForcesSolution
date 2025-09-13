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
  ll x, n;
  cin >> x >> n;
  //0 1
  ll temp = x;
  //0 5
  //-1 1 4 0 -5 1 8
  //10 10
  //9 11 14 10
  for (ll i = 1; i <= n; i++){
    if (temp % 2 == 0){
      temp -= i;
    }
    else if (temp % 2 != 0){
      temp += i;
    }
  }
  cout << temp << endl;
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
