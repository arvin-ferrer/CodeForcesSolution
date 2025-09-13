#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    /*
    if (n < 10) cout << n << endl;
    else if (n < 100) cout << floor(n/10)+9 << endl;
    else if (n < 1000) cout << floor(n/100)+18 << endl;
    else if (n < 10000) cout << floor(n/1000)+27 << endl;
    else if (n < 100000) cout << floor(n/10000)+36 << endl;
    else if (n < 1000000) cout << floor(n/100000)+45 << endl;
  */
    int d = floor(log10(n)) + 1;
    int base = pow(10, d - 1);
    int result = (n / base) + 9 * (d - 1);
    cout << result << endl;

  }

}
