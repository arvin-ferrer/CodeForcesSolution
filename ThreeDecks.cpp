
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


using namespace std;
void solve(){
  int a, b, c;
  cin >> a >> b >> c;
  //x = a+b+c/3 cards equal
  //if first or second > third no
  //1 2 3 possible 6 is divisible by 3
  //1 2 4 not possible not divisible by 3
  int x  = (a+b+c)/3;
  if ((a+b+c) % 3 != 0){
    cout << "NO\n";
    return;
  }
  else if (a > c || b > c){
    cout << "NO\n";
  }
  else if (x >= b) {
    cout << "YES\n";
  }
  else{
    cout << "NO\n";
  }
  // if (b-a > c-(b-a)){
  //   cout << "NO\n";
  // }
  // else{
  //   cout << "YES\n";
  // }

}
int main(){
  //1 2 4
  //1+2 = 3
  //
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  
  //
}
