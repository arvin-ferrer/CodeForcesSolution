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

    int n; cin >> n;
    vi a(n);
    for (int &x : a) cin >> x;

    //compute the candidate common difference:
    int diff = a[1] - a[0];

    //check the (a[0] - diff) % (n+1) == 0 condition right away:
    if ((a[0] - diff) % (n + 1) != 0) {
        cout << "NO\n";
        return;
    }

    //determine if increasing or decreasing:
    bool isIncreasing = (diff >= 0);
    bool isArithmetic = true;
    int mn = *min_element(a.begin(), a.end());

    //verify every step has exactly that diff and isn’t bigger than mn:
    if (isIncreasing) {
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] != diff || a[i] - a[i-1] > mn) {
                isArithmetic = false;
                break;
            }
        }
    } else {
        diff = -diff;  // make diff positive for the magnitude check
        for (int i = 1; i < n; i++) {
            if (a[i-1] - a[i] != diff || a[i-1] - a[i] > mn) {
                isArithmetic = false;
                break;
            }
        }
    }

    cout << (isArithmetic ? "YES\n" : "NO\n");
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
