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

void solve(){
	int n;
	cin >> n;
	vi ans;
	
	if (n % 2 == 0){
		for (int i = 0; i < n; i++){
			if (i == n-1){
				cout << 2 << ' ';
				return;
			}
			if (i % 2 == 0){
				cout << -1 << ' ';
			}
			else if (i % 2 != 0){
				cout << 3 << ' ';
			}
		}

	}
	else{
		for (int i = 0; i < n; i++){
			if (i % 2 == 0){
				cout << -1 << ' ';
			}
			else{
				cout << 3 << ' ';

			}

		}
	}
		cout << endl;
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
