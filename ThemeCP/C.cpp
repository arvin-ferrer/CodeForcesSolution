/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
 
bool is_prime(int x) {
    if (x <= 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
void solve(){
  int x, k;
  cin >> x >> k;
  if (k > 1 && x > 1){
    cout << "NO\n";
  }
  else if (k == 1){
    if (is_prime(x)) cout << "YES\n";
    else cout << "NO\n";
  }
  else{
    if (k==2) cout << "YES\n";
    else cout << "NO\n";
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
