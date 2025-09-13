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
#define endl "\n";


using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
typedef set<int> si;
typedef set<ll> sl;

void solve(){
  
  int n;
  cin >> n;
  si a;
  int x;
  for (int i = 0; i < n; i++){
    cin >> x;
    a.insert(x);
  }
  if (a.size() == n){
    cout << "YES\n";
  }
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
  //solve();

}
