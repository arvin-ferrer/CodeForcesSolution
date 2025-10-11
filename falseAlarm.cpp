#include <bits/stdc++.h>

using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n, x;
    cin >> n >> x;
    int fIdx = -1;
    int LIdx = -1;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
      if (arr[i] == 1){
        fIdx = i;
        break;
      }
    }
    for (int j = n-1; j > 0; j--){
      if (arr[j] == 1){
        LIdx = j;
        break;
      }
    }
    if (LIdx - fIdx >= x){
      cout << "NO\n";
    }
    else{
      cout << "YES\n";
    }
  }
}

