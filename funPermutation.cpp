/*
  Created by: acferrer
*/

#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <numeric>
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
  for (int &i : a) cin >> i;
  int mx = *max_element(a.begin(), a.end());
  mx++;
  for (int i = 0; i < n; i++){
    cout << mx-a[i] << ' ';
  }
  /*
   for checking the output
  for (int i = 0; i < n-1; i++){
    cout  << "gcd: "<< gcd(a[i] + q[i], a[i+1] + q[i+1]) << " end";
  }
  */
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
