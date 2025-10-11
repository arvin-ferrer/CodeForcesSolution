#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i){
    int x, y, a;
    cin >> x >> y >> a;
    //little B first
    //NO IF LITTLE B DIG IT UP FIRST
    double z = a + 0.5;
    // 1 2 4
    // 1 - b
    // 2+1=3 - k
    // 3+1=4 - b 
    // 4+2=6 - k //YES
    //
    //
    // 2 1 4
    // 2 - B
    // 3 - K
    // 5 - B
    
    // 3 2 5
    //
    //
    if (a%(x+y) >= x){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }      
}
