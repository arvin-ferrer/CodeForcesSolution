/*
  Created by: acferrer
*/

#include <iostream>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <vector>
#include <unordered_map>
#define endl "\n";


using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
typedef set<int> si;
typedef set<ll> sl;

void solve(){
  int n;
  cin >> n;
  vi a(n);
  int negatives = 0;
  int zeroes = 0;
  for (int &i: a){
    cin >> i;
  }

  for (int i = 0; i < n; i++){
    if (a[i] < 0){
      negatives++;
    }
    if (a[i] == 0){
      zeroes++;
    }
  }
  int ops = 0;
  if (negatives % 2 == 0){
    cout << zeroes << endl;
    return;
  }
  else{
    cout << zeroes + 2 << endl;
    return;
  } 
  // for (int i = 0; i < n; i++){
  //   if (a[i] <= 0){
  //     ops += 1-a[i];
  //   }
  // }
  // cout << ops << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
   solve();
  }
  //solve();

}
