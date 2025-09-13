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
  int n, c;
  cin >> n >> c;
  vi a(n);
  //5 10
  //10 4 15 1 8
  //1 4 8 10 15
  //15 10 8 4 1
  //+1 d1 a[i] * pow(2, d1) 
  for (int &i: a) cin >> i;
  sort(a.begin(), a.end(), greater<>());
  int count = 0;
  int destroyed = 0;
  for (int i = 0; i < n; i++){
    int cur = a[i] * pow(2, destroyed);
    if (cur > c) count++;
    else if (a[i] <= c) destroyed++;
  }
  cout << count << endl;
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
