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
  int cnt = 0;
    int neg = count(arr.begin(), arr.end(), -1);
    int pos = count(arr.begin(), arr.end(), 1);
    if (neg % 2 == 0 and pos >= neg) cout << "0\n";
    else{
      for (int i = 0; i < n; i++){
        if (arr[i] == -1){
          arr[i] = 1;
          neg--;
          pos++;
          cnt++;
        }
        if (neg % 2 == 0 and pos >= neg) break;
      } 
      cout << cnt << endl;
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
