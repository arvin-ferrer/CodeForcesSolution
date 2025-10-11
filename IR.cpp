#include <bits/stdc++.h>

using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Sieve of Eratosthenes to precompute primes up to n
vector<bool> sieve(int n) {
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int F(int a, int b) {
    return lcm(a, b); 
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<bool> primes = sieve(n);

        int count = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = a + 1; b <= n; b++) { 
                if (primes[F(a, b)] && a < b) { // added a 
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

