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
    ll L, R;
    cin >> n >> L >> R;
    vector<ll> a(n);
    for(ll& x : a) cin >> x;

    ll sum = 0;
    int wins = 0;
    int left = 0;

    for(int right = 0; right < n; ++right){
        sum += a[right];

        // Shrink window if sum becomes too large (or we encounter a[i] > R)
        while(left <= right && (sum > R || a[right] > R)){
            sum -= a[left];
            left++;
        }

        // If current window sum is within [L, R], we win a round:
        if(sum >= L && sum <= R){
            wins++;
            sum = 0;
            left = right + 1; // move window past this segment
        }
    }

    cout << wins << "\n";
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
