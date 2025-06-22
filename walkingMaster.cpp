#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (c < b) cout << -1 << endl;
    else if (c == b and a < c) cout << -1 << endl;
    else if (c == b and a > c) cout << a-c << endl;
    else{

    }
  }
}
