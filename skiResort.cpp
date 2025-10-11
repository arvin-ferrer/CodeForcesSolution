/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        // replace >q with 0, ≤q with 1
        a[i] = (a[i] <= q);
    }
 
    ll answer = 0;
    ll len = 0;  // current run of 1's
 
    auto countWays = [&](ll l){
        // number of ways to pick a subarray of length ≥k from a run of length l:
        // term = (l - k + 1), and sum_{i=1..term} i = term*(term+1)/2
        ll term = l - k + 1;
        return (term > 0) ? term * (term + 1) / 2 : 0;
    };
 
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            len++;
        } else {
            // end of a run
            answer += countWays(len);
            len = 0;
        }
    }
    // tail run
    answer += countWays(len);
 
    cout << answer << "\n";
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
