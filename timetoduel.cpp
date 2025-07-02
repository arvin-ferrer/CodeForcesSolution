/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  int n;
  cin >> n;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  bool lie = false;
  if (n == 2){
    if (arr[0] == arr[1]){
      cout << "YES\n";
      return;
    }
  }
  set <int> nodups;
  for (int i = 0; i < n; i++){
    nodups.insert(arr[i]);
  }
  if (nodups.size() == 1) lie = true;
  for (int i = 1; i < n; i++){
    //1 0 0
    if (arr[i-1] ==  0 && arr[i] == 0) {
      lie = true;
    }
  }
  if(lie){
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
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
