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
	vi a(n);
	//a+b>c, a+c>b, b+c>a - useless
	for (int &i : a) cin >> i;
	int total = 0;
	for (int i = 0; i < n; i++){
		total += a[i];
	}
	n--;
	cout << total-n<< endl;

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
