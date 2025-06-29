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
  int x;
  cin >> x;
  int y = x&(x-1);
  // cout << y << endl;
  if ((x&(x-1))==0) cout << 1 << endl;
  else{

    int count = 0;
    int pow = 1;
    while (x > 0) {
      pow = 1;
      while (pow * 2 <= x) {
        pow *= 2;
    } 
    x -= pow;  
    count++;   
    }
    cout << count << endl;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();


}
