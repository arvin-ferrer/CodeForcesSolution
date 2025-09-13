#include <iostream>
#include <string>

using namespace std;

bool solve() {
    int n;
    string a, b;
    cin >> n >> a >> b;

    for (int i = n - 1; i >= 1; --i) {
        if (a[i] == '1') {
            if (b[i-1] == '0') {
                swap(a[i], b[i-1]);
            } else {
                if (a[i-1] == '0') {
                    swap(b[i-1], a[i-1]);
                    swap(a[i], b[i-1]);
                } else {
                    return false;
                }
            }
        }
    }

    // Handle a[0]
    if (a[0] == '1') {
        // Check if we can swap a[0] with b[1] using i=1's swap(b[i], a[i-1])
        if (n < 2 || b[1] != '0') {
            return false;
        }
        swap(a[0], b[1]);
    }

    return (a == string(n, '0'));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cout << (solve() ? "YES" : "NO") << '\n';
    }

    return 0;
}
