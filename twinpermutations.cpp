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
    for(ll i = 0; i < n; i++){
        ll x;
        cin>>x;
        cout<<n+1-x<<' ';
    }
    cout<<'\n';  
}
//3 2 1
//2 1 3
//

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }


}
