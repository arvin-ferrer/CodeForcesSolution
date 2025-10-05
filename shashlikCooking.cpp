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
  int n, k;
  cin >> n >> k;
  int block = 2*k + 1;
  int moves = (n + block - 1) / block;
  cout << moves << endl;
  vi v;
  if(n % block > 0 && n % block < k+1){
    for(int i = 1 ; i <= n ; i+=block) v.push_back(i) ;
  }else{
    for(int i = k+1 ; i <= n ; i+= block) v.push_back(i) ;
  }
  for(auto i : v) cout << i <<" ";
  cout << endl;

  //5 1
  //1 2 3 4 5 // 2 MOVES
  //
  //
  //10 1
  //1 2 3 4 5 6 7 8 9 10
  //
  //If k >= median then we turn the middle one we just need 1 turn
  //If k < median
  //if k == median-1 minimum is 2 
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // int t;
  // while(t--){
  //  solve();
  // }
  solve();

}
