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
  int n, d;
  cin >> n >> d;
  vi arr(n);
  bool goods = true;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    if (arr[i] > d) goods = false;
  }

  sort(arr.begin(), arr.end());
  if (goods){
    cout << "YES\n";
    return;
  }
  if (arr[0]+arr[1] > d){
    cout << "NO\n";
  }
  else{
    cout << "YES\n";
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
