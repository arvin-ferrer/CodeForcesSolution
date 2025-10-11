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
  ll a, b;
  cin >> a >> b;
  if (a == b){
    cout << 0 << " " << 0 << endl;
  }
  else if (abs(a-b) == 1){
    cout << 1 << " " << 0 << endl;
  }
  else{
    
    cout << abs(a-b) << " " << min(a%abs(a-b), abs(a-b)-a%abs(a-b)) << endl;
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
