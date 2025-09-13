#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int x;
    int oddCnt = 0;
    int evenCnt = 0;
    for (int i = 0; i < n; i++){
      cin >> x;
      if (x % 2 == 0) evenCnt++;
      else oddCnt++;
    }
    if (oddCnt % 2 == 0){
      cout << "YES\n";
    }
    else if (oddCnt % 2 == 0 && evenCnt == 0){
      cout << "YES\n";
    }
    else cout << "NO\n";
  }

}
