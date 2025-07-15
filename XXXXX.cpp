/*
  Created by: acferrer
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    ll total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }

    if (total_sum % k != 0) {
        cout << n << endl;
        return;
    }

    int left = -1, right = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % k != 0) {
            left = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] % k != 0) {
            right = i;
            break;
        }
    }

    if (left == -1) {
        cout << -1 << endl;  // all elements divisible by k
    } else {
        cout << max(n - left - 1, right) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

