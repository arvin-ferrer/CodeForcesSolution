#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int maxInt = arr[n-1];
    int minInt = arr[0];
    int left = 0;
    int right = n-1;
    if ((maxInt+minInt) % 2 == 0) cout << 0 << endl;
    else{
        for (int i = 1; i < n; i++){
          if (arr[i] % 2 != minInt % 2){
            left = i;
            break;
          }
        
        }
        for (int i = 1; i < n; i++){
          if (arr[n-i-1] % 2 != maxInt % 2){
            right = i;
            break;
          }
        }
      cout << min(left, right) << endl;  
    }
    
  }
}
