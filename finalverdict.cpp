#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i){
    int n, x;
    cin >> n >> x;
    vector <int> arr(n);
    for (int j = 0; j < n; ++j){
      cin >> arr[j];
    }
    long long summ = 0;
    for (int i = 0; i < n; i++){
      summ += arr[i];
    }
    double ans = (double) summ/n;
    if (ans == x){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
    }
    
  

}
