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
    string s;
    cin >> s;

    int l = 1;
    int r = n;
    vector<int> a(n);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            a[i + 1] = l;
            l++;
        }
        if (s[i] == '>') {
            a[i + 1] = r;
            r--;
        }
    }
    a[0] = l;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

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
