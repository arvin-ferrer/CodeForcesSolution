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
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int count = 0;
  int sum = accumulate(arr.begin(), arr.end(), 0);
  //1 2 3 4 5 = 15-1 = 14
  ll subsum = 0;
  for (int i = 0; i < n; i++){
    subsum += arr[i];
    if (subsum == sum - 1) count++;
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
