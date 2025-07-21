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
  int k, x, a;
  //1 2 3 4 5 //element 1 is not allowed
  //2 3 4 5 6 //cannot be consecutive 
  //2 4 6 9 10 //
  //3 6 9 
  //2 4
  //1 2



  cin >> k >> x >> a;
  //sasha has a coins, she cannot lose x times in a row
  //worst case she loses x times she can bet 1 coin 
  //3 3 6 = 3
  //1 1 1 3
  
  int bet = 1;

  //3 3 6
  //1 2 3 //if she still has a remaining coins after x rounds and she can bet her remaining coins

  //5 4 7
  //1 2 3 4 

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
