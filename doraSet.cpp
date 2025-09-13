#include <bits/stdc++.h>

using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    vector <int> arr;
    for (int a = l; a <= r; a++){
      for (int b = a+1; b <= r; b++){
        for (int c = b+1; c <= r; c++){
          if (gcd(a,b) == gcd(b,c) and gcd(b,c) == gcd(a,c) and gcd(a,c)==1){
            cnt++;
          }
        }
      }
    }
    cout << cnt << endl;
  }
}
