#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;

  cin >> t;
  ll total = 0;
  while(t--){
    char l;
    int n;
    cin >> l >> n;
    if (l == 'P'){
      total += n;
    }
    else if (l == 'B'){
      if (total < n){
        cout << "YES\n";
        total -= n;
        if (total < 0) total = 0;
      }
      else{
        cout << "NO\n";
        total -= n;
      }
      
    }
  }

}
