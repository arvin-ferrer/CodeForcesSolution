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
  int n, m;
  cin >> n;
  vi boys(n);
  for (int &i: boys) cin >> i;

  cin >> m;
  vi girls(m);
  int count = 0;
  for (int &i: girls) cin >> i;
  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      if (abs(boys[i]-girls[j]) <= 1){
        count++;
        boys[i] = 10000;
        girls[j] = 10000;
        break;
      }
    }
  }
  cout << count << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  

}
