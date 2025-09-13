/*
  Created by: acferrer
*/

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int &i : arr) cin >> i;

    sort(arr.begin(), arr.end()); // Sort so smallest values (divisors) come first
    vector<bool> used(n, false);
    int color_count = 0;

    for (int i = 0; i < n; i++) {
        if (used[i]) continue;

        int base = arr[i];
        color_count++;

        for (int j = i; j < n; j++) {
            if (!used[j] && arr[j] % base == 0) {
                used[j] = true;
            }
        }
    }

    cout << color_count << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
