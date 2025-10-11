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
  if (n < 5){
    cout << -1 << endl;
  }
  else{
    vi ans;
    for (int i = 2; i <= n; i+=2){
      if (i == 4){
        continue;
      }
      ans.push_back(i);
    }
    ans.push_back(4);
    ans.push_back(5);
    for (int i = 1; i <= n; i+=2){
      if (i == 5){
        continue;
      }
      ans.push_back(i);
    }
    for (int i: ans) cout << i << ' ';
    cout << endl;

  }
    //6

    //5
    //2 4 5 1 3
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }
  //solve();

}
