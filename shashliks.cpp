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
  int k, a, b, x, y;
  cin >> k >> a >> b >> x >> y;
  int shaliks = 0;
  if (k < a && k < b) {
    cout << 0 << endl;
    return;
  }

  if (x > y){ //second type
    if (k >= b) {
      int count_b = (k - b) / y + 1;
      shaliks += count_b;
      k -= count_b * y;
    }
    if (k >= a) {
      int count_a = (k - a) / x + 1;
      shaliks += count_a;
    }
    
  }
  else {
     if (k >= a) {
      int count_a = (k - a) / x + 1;
      shaliks += count_a;
      k -= count_a * x;
    }
    if (k >= b) {
      int count_b = (k - b) / y + 1;
      shaliks += count_b;
    }
  }
  cout << shaliks << endl;
  


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
