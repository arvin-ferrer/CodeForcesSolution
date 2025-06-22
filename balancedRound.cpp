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
  int n, k;
  cin >> n >> k;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  //8 1
  //1 3 3 4 5 7 8 10
  //17 3 1 20 12 5 17 12
  //8 3
  //1 3 5 12 12 17 17 20
  //

  sort(arr.begin(), arr.end());
  int count = 1;
  // vi subsequence;
  int ans = INT_MIN;
  arr.push_back(arr[n-1]+k+1);
  for (int i = 1; i < n; i++){ //always use i = 1; i < n; arr[i]-arr[i-1] #opposite 
    if (arr[i] - arr[i-1] <= k){
      count++;
    }
    else{
      // subsequence.push_back(count+1);
      count = 1;
    }
    ans = max(ans, count);
  }
  if (ans == INT_MIN) cout << 0 << endl;
  else
    cout << n-ans << endl;
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
