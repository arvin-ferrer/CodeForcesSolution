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
  //1 2 3 4 5
  //1 + 1 + 1 + 1 + 1
  //3 1 2 4
  //4 5 2 3
  //4 + 4 + 2 + 2 = 12
  //4 
  int n;
  cin >> n;
  vi a(n);
  for (int &i: a) cin >> i;
  if (a[0] == 0){
    cout << 0 << endl;
    return;
  }
  cout << min(a[0], a[1])+a[0] << endl;
  
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
