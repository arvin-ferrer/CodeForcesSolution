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

int calc_ops(int len) {
    // how many times you have to repeatedly remove
    // non-adjacent positions (i.e. floor(len/2) each time)
    // until the segment is gone.
    int ops = 0;
    while (len > 0) {
        len /= 2;
        ops++;
    }
    return ops;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int best = INT_MAX;

    // try making everything each character c in 'a'..'z' 
    for (char c = 'a'; c <= 'z'; c++) {
        int max_seg = 0;
        int cur_len = 0;
        // find the longest contiguous segment of chars != c
        for (int i = 0; i < n; i++) {
            if (s[i] != c) {
                cur_len++;
                max_seg = max(max_seg, cur_len);
            } else {
                cur_len = 0;
            }
        }
        // how many ops to clear a segment of length max_seg
        best = min(best, calc_ops(max_seg));
    }

    cout << best << "\n";
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
