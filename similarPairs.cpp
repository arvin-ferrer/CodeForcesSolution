/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;

void solve(){
  int n;
  cin >> n;
  vi a(n);
  for (int &i: a) cin >> i;
  int oddC = 0, evenC = 0;
  
  for (int i = 0; i < n; i++){
    if (a[i] % 2 == 0 and a[i] != 0) evenC++;
    else if (a[i] % 2 != 0 and a[i] != 0)oddC++;
  }

  if (evenC % 2 == 0 && oddC % 2 == 0){
    cout << "YES\n";
    return;
  }
  else{
      for (int i = 0; i < n; i++){
         for (int j = i+1; j < n; j++){
            if (abs(a[i]-a[j]) == 1){
                cout << "YES\n";
                return;
        }
      }
    }
      cout << "NO\n";
  
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
