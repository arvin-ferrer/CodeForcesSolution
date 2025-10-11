#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;

  const int MAX_N = 10000001; // Maximum value of n

  
  vector<bool> primes(MAX_N, true);
  primes[0] = primes[1] = false;

  for (int i = 2; i * i < MAX_N; i++) {
    if (primes[i]) {
      for (int x = i * i; x < MAX_N; x += i) {
        primes[x] = false;
      }
    }
  }

  while (t--) {  
    int n;
    cin >> n;

    int count = 0;
    for (int a = 1; a <= n; ++a) {
      for (int p = 2; p <= n / a; ++p) {
        if (primes[p] && (long long)a * p <= n && a < (long long)a * p) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}






