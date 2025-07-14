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
  if (n % 2 == 0){
    cout << n/2 << ' ' << n/2 << endl;
  }
  else if ((n+1) % 10 == 0){
    //
    
  }
  else{
    int x = (n+1)/2;
    cout << x << ' ' << x-1 << endl;
    
  }
  //11 n+1 = 12
  //n/2, n/2 - 1
  //13
  //7 6
  //27
  //14 13
  //69 79 89 99
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
