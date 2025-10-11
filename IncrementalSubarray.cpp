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
    int n, m;
    cin >> n >> m;
    vi a(m);
    for (int &i : a){
      cin >> i;
    }

    if (m == 1 && n == a[0]){
      cout << 1 << endl;
      return;
    }
    else if (m == 1){
      int df = a[0]-1;
      cout << n-df << endl;
      return;

    }
    else{
      int mn = INT_MAX;
      for (int i = 1; i < m; i++){
        if (a[i-1] >= a[i]){
          cout << 1 << endl;
          return;
          }

        else{
          int df = a[i] - 1;
          mn = min(n-df, mn);
        }
       }
       cout << mn << endl;
    }

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
