#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left = 0;
    int right = n-1;
    while(s[left] != s[right] && left < right){
      left++;
      right--;
      
    }
  
    cout << (right-left)+1 << endl;
  }
}
