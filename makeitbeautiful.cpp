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
  int n;
  cin >> n;
  vi v1(n);
  for (int i = 0; i < n; i++){
    cin >> v1[i];
  }
  vi ans;
  if (v1[n-1] == v1[0]) cout << "NO\n";
  else{
    cout << "YES\n" << v1[n-1] << ' ';
    for (int i = 0; i < n-1; i++){
      cout << v1[i] << ' ';
    }
    cout << endl;
  }
  // 1 2 3 4 5
  // 1 3 2 4 5
  // 
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
