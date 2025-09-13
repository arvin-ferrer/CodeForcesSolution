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
  int n;
  cin >> n;
  vi a(n);
  vi b(n);
  for (int i = 0; i < n; i++){
    cin >> a[i];
  }
  for (int i = 0; i < n; i++){
    cin >> b[i];
  }
  vi c;
  //back, front,
  int maxA = INT_MIN;
  int maxB = INT_MIN;
  int countA = 1;
  int countB = 1;
  //1 2 2 2 1
  for (int i = 1; i < n; i++){
    if (a[i] == a[i-1]){
      countA++;
    }
    else{
      maxA = max(maxA, countA);
      countA = 0;
    }
  }
  for (int i = 1; i < n; i++){
    if (b[i] == b[i-1]){
      countB++;
    }
    else{
      maxB = max(maxB, countB);
      countB = 0;
    }
  }
  cout << maxA << ' ' << maxB << endl;


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
