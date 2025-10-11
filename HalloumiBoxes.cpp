#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
  
int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector <int> arr(n);
    
    for (int i = 0; i < n; ++i){
      cin >> arr[i];
    }
    //if k > 1 then it's always possible to sort because of you can just do bubble sort
    //edge case where the array is already sorted
    if (k > 1 || is_sorted(arr.begin(), arr.end())) cout << "YES\n";
    else cout << "NO\n";
  }
}
