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
  int n, x;
  cin >> n >> x;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  int minInt = arr[0];
  for (int i = 0; i < n-1; i++){
    minInt = max(minInt, arr[i+1]-arr[i]);
  }
  minInt = max(minInt, (x-arr[n-1])*2);
  cout << minInt << endl;


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
