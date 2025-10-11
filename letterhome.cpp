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
  int n, s;
  cin >> n >> s;
  vi arr(n);
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  
  if (n == 1){
    cout << abs(s-arr[0]) << endl;
  }
  
  else if (s < arr[0]) cout << arr[n-1]-s << endl;
  else if (s > arr[n-1]) cout << s-arr[0] << endl;
  else if (abs(s-arr[0]) < abs(s-arr[n-1])){
    cout << (abs(s-arr[0]))*2 + abs(s-arr[n-1]) << endl;
  }
  else {
    cout << (abs(s-arr[n-1]))*2 + (abs(s-arr[0])) << endl;
  }
  //6
  //1 2 3 4 5 6 7 8 9 10 11
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
