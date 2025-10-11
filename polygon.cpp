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
  int n;
  cin >> n;
  vector <string> matrix(n);
  for (int i = 0; i < n; i++){
    cin >> matrix[i];
  }

  bool good = true;
  for (int row = 0; row < n-1; row++){
    for (int col = 0; col < n-1; col++){
      // if (row != n-1 && col != n-1)
        if (matrix[row][col] == '1' && matrix[row+1][col] == '0' && matrix[row][col+1] == '0'){
          good = false;
        }
    }
  }
  if (good) cout << "YES\n";
  else{
    cout << "NO\n";
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
