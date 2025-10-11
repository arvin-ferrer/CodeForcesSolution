
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
	int n;
	cin >> n;
	vi a(n);
	int total = 0;

	for (int i = 0; i < n; i++){
		cin >> a[i];
		total += a[i]; 
	}

	if (total % 3 != 0){
		cout << 0 << ' ' << 0 << endl;
	}
	else{
		cout << 1 << ' ' << 2 << endl;
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
