/*
  Created by: acferrer
*/

#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define endl "\n";


using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
typedef set<int> si;
typedef set<ll> sl;

void solve(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	//a:b, c:d
	// WWLWWLWW 6-2 = 4
	//WWLWWLWWLWWLWWLWWLW
	//WLWWL
	int diff = (c-a);
	int diff2 = (d-b);
	
	if (max(a, b) <= ((min(a, b)+1)*2) && max(diff, diff2) <= 2*((min(diff, diff2))+1)){
		cout <<"YES\n";
		return;
	}
	cout << "NO\n";


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
