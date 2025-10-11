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

void solve(){
  int n, m;
  string a, b, c;
  cin >> n;
  cin >> a;
  cin >> m;
  cin >> b;
  cin >> c;
  for (int i = 0; i < m; i++){
    if (c[i] == 'D'){
      a += b[i];
    }
    else if (c[i] == 'V'){
      a.insert(0, 1, b[i]);
    }
  }
  cout << a << endl;
}
  //1234567891011121314151617181920
      
  //k = 10 - 1
  //k = 11 - 0
  //k = 12 - 1
  //k = 13 - 1
  //k = 14 - 1
  //k = 15 
  //k = 99 - 979899 - 8
  //k = 100 - 979899100
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
