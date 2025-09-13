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
  int n, k;
  cin >> n >> k;
  vi arr(n);
  ll sm = 0;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
    sm+=arr[i];
  }
  
  sort(arr.begin(), arr.end());
  arr[n-1]--;
  sort(arr.begin(), arr.end());

  if ((arr[n-1]-arr[0]) > k){
    cout << "Jerry\n";
  }
  else{
    if ((sm) % 2 != 0) cout << "Tom\n";
    else cout << "Jerry\n";
    
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
