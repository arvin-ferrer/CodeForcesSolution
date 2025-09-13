#include <bits/stdc++.h>

using namespace std;
int main(){

  int t;
  cin >> t;
  while(t--){
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    //m 5 5 10
    int count = 0;
    //3 6 1 1
    if (a <= m){
        count += a;
    }
    if (a > m){
      count += m;
    }
    if (b <= m){
      count+= b;
    }
    if (b > m){
      count+= m;
    }
    int remaining = max(0, m*2-count);
    if (c <= remaining){
      count += c;
    }
    else{
      count += remaining;
    }
    cout << count << endl;
  }
}
