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
	//0 0 0 0
	//1 0 0 1 for every i=0, j=i+3
	//+2 at first then 
	//1 0 1 = 2 + 
	//l = 0, r = 2
	if (n <= 3) cout << n << endl;
	else{
		//0 0 0 0
		//1 0 0 1 0 0 1
		int count = 0;
		for (int i = 0; i <= n; i+=3){
			count++;
		}
		cout << count << endl;
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
  //solve();

}
