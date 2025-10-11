// /*
//   Created by: acferrer
// */

// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;
// typedef vector <ll> vll;
// typedef vector<int> vi;
// typedef unordered_map<int, int> u_map;
// typedef unordered_map<ll, ll> ll_map;

// void solve(){
//   int n;
//   cin >> n;
//   bool stat = true;
//   vector <string> s(n);
//   for (int i = 0; i < n; i++){
//     cin >> s[i];
//   }
//   for (int i = 0; i < n; i++){
//     for (int j = 1; j < s[i].size(); j++){
//       int x = (int) s[i][j];
//       int y = (int) s[i][j-1];
//       //(int) s[i][j] < (int) s[i][j-1]
//       cout << x << ' ' << y << endl;
//       if (x < y){
//         stat = false;
//       }
//     }
//   }
//   if (stat) cout << "YES\n";
//   else cout << "NO\n";
// }

// int main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(0);
//   int t;
//   cin >> t;
//   while(t--){
//    solve();
//   }


// }
