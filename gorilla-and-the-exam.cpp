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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int &x : a) {
        cin >> x;
    }

    sort(a.begin(), a.end());

    vector<pair<int, int>> freq; 
    int current = a[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == current) {
            count++;
        } else {
            freq.emplace_back(current, count);
            current = a[i];
            count = 1;
        }
    }
    freq.emplace_back(current, count); 
    vector<int> counts;
    for (auto &[val, cnt] : freq) {
        counts.push_back(cnt);
    }

    sort(counts.begin(), counts.end());

    int distinct = counts.size();
    for (int cnt : counts) {
        if (k >= cnt) {
            k -= cnt;
            distinct--;
        } else {
            break;
        }
    }

    if (distinct == 0){
        cout << 1 << '\n';
        return;
    }
    cout << distinct << '\n';

    //leave the highest number of occurences in the array
    //set the other numbers to k
    //then count the number of unique numbers
    //k = 3
    //1 1 2 2 2 3 4 5
    //11 4
    // 3 2 1 4 4 3 4 2 1 3 3
    // 1 1 2 2 3 3 3 3 4 4 4 max = 4 + k = 8 -> 
    // 3 3 3 3 3 3 3 3 4 4 4
    //1 1 2 2 3 3 4 4
    //2 2
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
