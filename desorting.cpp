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
  int min_int = INT_MAX;
  
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < n-1; i++){
    min_int = min(arr[i+1]-arr[i], min_int);;
  }
  //3
  if (min_int < 0) cout << 0 << endl;
  else if (min_int == 0) cout << 1 << endl;
  else cout << (min_int/2)+1 << endl;
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
