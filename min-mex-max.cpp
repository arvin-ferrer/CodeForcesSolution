/*
  Created by: acferrer
*/

// #include <bits/stdc++.h>
#include <iostream>
#include <set>
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
	for (int i = 0; i < n; i++) cin >> a[i];
	bool good = true;	
	set <int> ans(a.begin(), a.end());
  ans.erase(-1);
  if (ans.size() <= 1 && ans.count(0) == 0){
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
  //7 3 2 
    //1 1 -1
    //mex = 0
    //1 2 -1 = 0 good ?
    //1 2 
    //(1,2), (1,3) (1,4)
    //(2, 2), (2, 3) 
    //(2, 1), (3, 2)
    //(4, 1)
    //
		//8 mex = 2
		//
		// if (count == 8){
		// 	good = false;
		// }
		// cout << "max: " << mx << ' ' << "min: " << mn << endl;
		// if (count == 7){
		// 	cout << "NO\n";
		// 	return;
		// }
		// else if (count == 5){
		// 	if (mex(sub) == mx-mn){
		// 		cout << 
		// 		cout << "YES\n";
		// 		return;
		// 	}
		// 	else{
		// 		cout << "NO\n";
		// 		return;
		// 	}
		// }
		// else if (count == 8){
		// 	cout << "YES\n";
		// 	return;
		// }
		// else{
		// 	if (mx-mn == 7 || mx-mn == 0){
		// 		cout << "YES\n";
		// 		return;
		// 	}
		// 	cout << "NO\n";
		// 	return;
		// }
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
