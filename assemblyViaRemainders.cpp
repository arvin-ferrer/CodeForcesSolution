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
  vi a(n-1);
  for (int &i: a) cin >> i;
  vi ans;
  ans.push_back(501);
  //3
  //1 1
  for (int i = 1; i < n; i++){
    //5/3 = 1 r = 2; r = a[i] x%y == a[i]
    ans.push_back(ans[i-1]+a[i-1]);
  }
  for (int i: ans) cout << i << ' ';
  cout << endl;
}
//1 2 3 1 2 6
//1 -2
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
