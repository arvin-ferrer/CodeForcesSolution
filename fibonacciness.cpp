#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int a, b, d, e;
    int c;
    cin >> a >> b >> d >> e;
    int count = 0;
    for (c = -100; c <= 100; c++){
      int curr = 0;
      if (a+b == c) curr++;
      if (b+c == d) curr++;
      if (c+d == e) curr++;
      count = max(count, curr);
    }
    cout << count << endl;
  }

}
