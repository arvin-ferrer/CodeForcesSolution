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
  string s;
  cin >> s;
  string t;
  int cnt0 = 0;
  int cnt1 = 0;
  for (int i: s){
    if (i == '0') cnt0++;
    else cnt1++;
  }
  //111100
  //cnt0 = 2
  //cnt1 = 4
  //00
  //0101110001
  //0 = 1
  //1 = 
  //1010001110
  for (int i = 0; i < s.size(); i++){

    if (s[i] == '0') {
      if (cnt1 > 0){
      t+='1';
      cnt1--;
      }
      else break;
    }
    else if(s[i] == '1'){
      if (cnt0 > 0){
      t+='0';
      cnt0--;
      }
      else break;
    }
  }
  cout << s.size()-t.size() << endl;
  //111100
  //1100
  //1010
  //0101
  //0011
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
