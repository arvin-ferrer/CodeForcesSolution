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
  int min_int = INT_MAX;
  int cnt = 0;
  if (k == 2 || k == 3 || k == 5){
    for (int i = 0; i < n; i++){
      if (arr[i] % k == 0){
        cout << 0 << endl;
        return;  
      }
      else{
          int step = (k-(arr[i]%k))%k;
          min_int = min(step, min_int);
      }
     }
     cout << min_int << endl;
    }
  else{
    int step = INT_MAX;
    for (int i = 0; i < n; i++){
      if (arr[i] % 2 == 0)
        cnt++;
      step = min(step, (4 - (arr[i] % 4)) % 4);
    }
  cout << min(step, max(0, 2 - cnt)) << endl;

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
