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
  vi arr;
  for (int i = 0; i<n; i++){
    int x;
    arr.push_back(x+1);
  }
  for (int i = 1; i < n; i++){
      arr[i] = arr[i]+1; 
    }
  //1 2 3 4 5
  //2 3 4 5 6
  for (int i: arr) cout << i << " ";
  cout << endl;
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

