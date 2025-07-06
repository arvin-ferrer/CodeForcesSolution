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

    bool found = false;
    for (int x = 0; x <= c; x++){
      for (int y = 0; y <= c; y++){
        bool ans = a*x+b*y == c;
        if (ans){
          found = true;
          break;
        }
      }
    }
    if (found) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();


}
