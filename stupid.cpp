#include <bits/stdc++.h>


using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k, x;
    cin >> n >> k >> x;
    bool found = false;
    for (int i = 1; i <= k; i++){
      if(n % i == 0 && k >= 2 && x != i){
        cout << "YES\n";
        cout << n/i << endl;
        for (int j = 0; j < n/i; j++){
          cout << i << " ";
        }
        cout << endl;
        found = true;
        break;
      }
    }
    if (!found) cout << "NO\n";
  }
}
