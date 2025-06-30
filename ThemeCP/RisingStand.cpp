/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++){
      cin >> arr[i];
    }
    if (k == 1){
      cout << floor((n-1)/2) << endl;
    }
    else{
      int count = 0;
      for (int i = 1; i < n-1; i++){
        if (arr[i] > (arr[i-1]+arr[i+1])){
          count++;
        }
      }
      cout << count << endl;

    }

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }


}
