#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  int t;
  long l, r, d, u;
  cin >> t;
  while (t--){
    cin >> l >> r >> d >> u;
    if (l == r and r == d and d == u){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
  

}
