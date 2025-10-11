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
  int n, m, k;
  cin >> n >> m >> k;
  int each = n/k;
  if (each >= m) cout << m << endl;
  else{
    int remainPlayer = k-1;
    int mxJoker = min(each, m); 
    int remainJoker = m-mxJoker; 
    double distribute = ceil((double) remainJoker/remainPlayer);
    //remaining joker will be distributed to remainPlayer
    cout << mxJoker-distribute<< endl;


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
