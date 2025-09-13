/*
  Created by: acferrer
*/

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  int n;
  cin >> n;
  int count = 0;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    if (arr[i] == 2) count++;
  }
  int cnt = 0;
  if (count == 0) cout << 1 << endl;
  else if (count % 2 == 0) {
    for (int i = 0; i < n; i++){
      if (arr[i] == 2) cnt++;
      if (cnt == count/2){
        cout << i+1 << endl;
        break;
      }
    }
  }
  else cout << -1 << endl;
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
