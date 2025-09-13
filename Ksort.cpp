#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    int smallest = INT_MAX;
    if (is_sorted(arr.begin(), arr.end())){
      cout << "0\n";
    }
    for (int i: arr){
      if (i < smallest){
        smallest = i;
      }
    }
  }

}
