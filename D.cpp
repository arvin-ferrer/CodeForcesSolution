/*
  Created by: acferrer
*/
// #include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
// const int row = 100;
// const int col = 100;
void solve(){
  int r, c;
  cin >> r >> c;
  // int input[row][col];
  vector <string> input(r);
  vi ans;
  for (int i = 0; i < r; i++){
    cin >> input[i];
  }

  //4 3
  //..#
  //#.#
  //#.#
  //###
  //r = 4, c = 3
  for (int i = 0; i < c; i++){
    int count = 0;
    for (int j = 0; j < r-1; j++){
      if (input[j][i] == '#' && input[j+1][i] == '#') count++;
      else if (input[j][i] == '#' && input[j+1][i] == '.'){
        cout << "No\n";
        return;
      }
    }
    if (input[r-1][i] == '#') count++;
    if (count == 0){
      cout << "No\n";
      return;
    }
    else
      ans.push_back(count);
  }
  int mx = *max_element(ans.begin(), ans.end());
  if (mx != r) {
    cout << "No\n";
    return;
  }

  cout << "Yes\n";
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++){
    cout << ans[i] << ' ';
  }
  cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // int t;
  // cin >> t;
  // while(t--){
   // solve();
  // }
  solve();

}
