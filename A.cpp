#include <bits/stdc++.h>


using namespace std;

int main(){

  int t;
  long long n;
  cin >> t;
  while(t--){
    cin >> n;
    int ans = 3*(floor((n/15)));
    n %= 15;
    for(int i = 0; i <= n; i++){
      if (i % 3 == i % 5){
        ans++;
      }
    }
    cout << ans << endl;
  }


}
