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
    int evenC = 0;
    int oddC = 0;
    int sumEven = 0;
    int sumOdd = 0;

    //1 2 3 4 5
    //A = 4+2+1 = 6
    //B = 5+3 = 8

    // for (int i = 0; i < n; i++){
    //   if (a[i] % 2 == 0){
    //     evenC++;
    //     sumEven += a[i];
    //   }
    //   else{
    //     oddC++;
    //     sumOdd += a[i];
    //   }
    // }
    //
    //8 8 9 15
    // 
    //7 6 8 9
    //6 7 8 9
    //A - 9
    //B - 8
    ll ans = 0;
    sort(a.begin(), a. end(), greater<int>());
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
          if (a[i] % 2 == 0) {
            ans += a[i];
          }
        } 
        else {
          if (a[i] % 2 == 1) {
            ans -= a[i];
          }
        }
      }
    if (ans == 0) cout << "Tie\n";
    else if (ans > 0) cout << "Alice\n";
    else cout << "Bob\n";
    // if ((abs(evenC-oddC) == 1 || abs(evenC-oddC) == 0) && sumOdd > sumEven){
    //   cout << "Tie\n";
    // }

    // else if (evenC >= oddC && sumEven > sumOdd){
    //   cout << "Alice\n";
    // }
    // // else if (oddC >= evenC && sumOdd > sumEven && abs(oddC-evenC) > 1){
    // else{
    //   cout << "Bob\n";
    // }
    // }
    // else{
    //   cout << "Tie\n";
    // }
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
