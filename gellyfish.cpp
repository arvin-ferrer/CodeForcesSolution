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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  //their optimal strategy is to attack which has the lower hp
  if (min(b, d) > min(a, c)){
    cout << "Flower\n";
  }
  else{
    cout << "Gellyfish\n";
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


}
