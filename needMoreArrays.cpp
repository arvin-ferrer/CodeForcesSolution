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
    //if the difference between an and an+1 < an+1:
    //remove an+1
    int n;
    cin >> n;
    vi a(n);
    //1 2 3
    //1 3

    // vi copy = a;
    for (int &i:a) cin >> i;
    int count = 0;
    //1 2 3 4 5 6
    for (int i = 1; i < n-1; i++){
      if (a[i-1]+1 >= a[i] && a[i-1]+1 < a[i+1])
        // count++;
        a.erase(a.begin()+i+1);
    }
      for (int i : a){
       count++;
    }
    cout << count-1 << endl;
    // for (in)
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
