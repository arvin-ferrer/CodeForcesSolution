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
  int N, K;
  cin >> N >> K;
  vi arr(N);
  vi indices;
  for (int i = 0; i < N; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < N; i++){
    for (int j = i+1; j < N; j++){
      if (abs(arr[i]-K) > abs(arr[j]-K)){
        swap(arr[i], arr[j]);
      }
    }
  }
  for (int i: arr) cout << i << ' ';
  cout << endl;

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
