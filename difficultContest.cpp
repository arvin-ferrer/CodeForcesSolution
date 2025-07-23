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
  //FFT or NTT
  string s;
  cin >> s;
  sort(s.begin(), s.end(), greater<>());

  // for (int i = 1; i < s.size()-1; i++){
  //   if (s[i] == 'F' && s[i-1] == 'F' && s[i+1] == 'T'){
  //     swap(s[i], s[i+1]); 
  //   }
  //   else if(s[i-1] == 'N' && s[i] == 'T' && s[i+1] == 'T'){
  //     swap(s[i-1], s[i]);
  //   }
  // }
  cout << s << endl;
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
