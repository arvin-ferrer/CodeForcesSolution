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
    for (int i = 0; i < n; i++){
      a[i] = abs(a[i]);
    }
    int a1 = a[0];
    sort(a.begin(), a.end());
    int x = floor(n/2)+1;
    x--;
    if (a1 <= a[x]) cout << "YES\n";
    else cout << "NO\n";

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
