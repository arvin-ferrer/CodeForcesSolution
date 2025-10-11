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
  //1 7 11 2 13
  //2
  //0-even, 1-odd
  //1 1 1 0 1
  //1 1 0 1
  //1 0 1
  //1 0 1 0 1 1 0
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int prev = arr[0];
  int cnt = 0;
  for (int i = 1; i < n; i++){
    if (prev % 2 == 0 && arr[i] % 2 == 0 || prev % 2 != 0 && arr[i] % 2 != 0){
      cnt++;
    }
    prev = arr[i];
  }
  cout << cnt << endl;
  
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
