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
  vi a(n);
  for (int &i :a){
    cin >> i;
  }
  ll odd = 0;
  ll even = 0;
  bool allneg = true;
 
  for (int i = 0; i < n; i++){
    if (a[i] > 0) allneg= false;
    if (i % 2 == 0){
      even += max(a[i], 0);
    }
    else{
      odd += max(a[i], 0);
    }
  }
  if (allneg){
    int mx = *max_element(a.begin(), a.end());
    cout << mx << endl;
  }

  else{
    cout << max(odd, even) << endl;
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
