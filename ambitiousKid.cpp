#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector <int> arr;
  
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr.push_back(abs(x));
  }
  sort(arr.begin(), arr.end());
  cout << arr[0] << endl;
}

