#include <bits/stdc++.h>


using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int minInt = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x == 0){
          count++;
        }
        else{
          count = 0;
        }
        minInt = max(minInt, count);
    }
    cout << minInt << endl;
  }

}
