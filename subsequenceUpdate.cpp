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
	int n, l, r;
	cin >> n >> l >> r;
	l--; r--; 
	vi a(n);
	for (int &i: a) cin >> i;
	int len = r - l + 1;
	sort(a.begin(), a.end());
	int sm = 0;
	for (int i = 0; i < len; ++i) 
		sm += a[i];
	cout << sm << endl;
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
