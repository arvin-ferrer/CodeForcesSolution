#include <bits/stdc++.h>

using namespace std;

int main(){

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector <char> arr(n);
    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    int cnt = 0;
    int i = 0;
    int j = 2;
    bool stat = false;
    while(j < n){
      if (arr[i] == '.' && arr[j] == '.' && arr[j-1] == '.'){
        cout << "2\n";
        stat = true;
        break;
      }
      i++;
      j++;
    }
    if(!stat){
      for(char c: arr){
        if (c == '.') cnt++;
      }
    cout << cnt << endl;
    }  
  }
}
