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
  cin >> n;
  if (n < 4){
    cout << -1 << endl;
  }
  else if (n % 2 != 0 && n % 3 != 0){
    cout << -1 << endl;
  }
  else{
    cout << floor(n/2) << ' ' << floor(n/3) << endl;
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
