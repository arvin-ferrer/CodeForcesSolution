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

int clockwise(int x, int r, int n){
  int clockwise = (x + r - 1) % n + 1;
  return clockwise;

}
int counterclockwise(int x, int r, int n){
  int counterclockwise =  ((x - 1) - r % n + n ) % n + 1;
  return counterclockwise;
}

void solve(){
  int n, m ,x;
  cin >> n >> m >> x;
  set <int> ans;
  int r1;
  char c1;
  cin >> r1 >> c1;
  if (c1 == '?'){
    ans.insert(clockwise(x, r1, n));
    ans.insert(counterclockwise(x, r1, n));
  }
  else if (c1 == '1'){
    ans.insert(counterclockwise(x, r1, n));
  }
  else if (c1 == '0'){
    ans.insert(clockwise(x, r1, n));
  }
  for (int i = 0; i < m-1; i++){
    int r;
    char c;
    cin >> r >> c;
    for (int pos : ans)
      if (c == '?'){
        ans.insert(clockwise(pos, r1, n));
        ans.insert(counterclockwise(pos, r1, n));
      }
      else if (c == '1'){
        ans.insert(counterclockwise(pos, r1, n));
      }
      else if (c == '0'){
        ans.insert(clockwise(pos, r1, n));
      }
    }
  
  cout << ans.size() << endl;
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
