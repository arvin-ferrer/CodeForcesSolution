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

int digit_sum(int x) {
    int sum = 0;
    while (x > 0){
        sum += x % 10;
        x /= 10;
        return sum;
}

void solve(){
  int k;
  cin >> k;
  int count = 0;
  while(k){
    count++;
    if (digit_sum(count) == 10) k--;

  }
  cout << count << endl;
  //k = 2, 10+(k*9) if k < 10
  //k = 10, 109+((k-9)*9)
  //why is there no fvcking O(1) solution??!
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  

}
