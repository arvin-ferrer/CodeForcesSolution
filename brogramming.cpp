#include <bits/stdc++.h>

using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    string bin;
    cin >> n;
    cin >> bin;
    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < n; i++){
      if (bin[i] == '1') count1++;
      else count0++;
    }
    if (count1 == n) cout << "1" << endl;
    else if (count0 == n) cout << "0" << endl;
    else if (count1 > count0) cout << n << endl;
    else if (count0 > count1) cout << count1 << endl;
    else cout << "1" << endl;
  }


}
