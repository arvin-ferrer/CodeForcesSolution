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

// int getmax(const vi &a, int l, int r) {
//   int mx = INT_MIN;
//   for (int i = l; i <= r; i++) {
//     mx = max(a[i], mx);
//   }
//   return mx;
// }

// int getmin(const vi &a, int l, int r) {
//   int mn = INT_MAX;
//   for (int i = l; i <= r; i++) {
//     mn = min(a[i], mn);
//   }
//   return mn;
// }

void solve(){
    int n;
    cin >> n;
    vi a(n);
    for (int &i: a) cin >> i;
    int l = 0, r = n-1;
    int mn = 1, mx = n;
    //I'm an idiot 1 <= a[i] <= n. I assumed a[i] can be > n
    while(l <= r){
      if (a[l] == mn) {
          l++;
          mn++;
        } 
      else if (a[l] == mx) {
          l++;
          mx--;
        } 
      else if (a[r] == mn) {
          r--;
          mn++;
        } 
      else if (a[r] == mx) {
          r--;
          mx--;
        } 
      else {
          break;
        }
    }
    if(l <= r){
        cout << l + 1 << " " << r + 1 << endl;
        return;
    }
    cout << -1 << endl;
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
