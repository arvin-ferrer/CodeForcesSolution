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
    bool decreasing = true;
    for (int i = 1; i < n; i++){
        // 3 2 1
        if (a[i] > a[i-1]){
            decreasing = false;
        }
    }
    //5 4 3 2 1
    //5 1 4 2 3
    if (decreasing){
        for (int i = 0; i < n; i++){
            if (i % 2 == 0){
                cout << 'L';
            }
            else{
                cout << 'R';
            }
        }
        cout << endl;
        return;
    }
    int left = 0;
    int right = n-1;
    int prev = INT_MAX;
    //9
    // 1 3 6 8 9 7 5 4 2
    if (a[0] > a[n-1]){
        prev = a[0];
        cout << 'L';
        left++;
    }
    else {
        prev = a[n-1];
        cout << 'R';
        right--;
    }
    while(left <= right){
        // 1 3 6 8 9 7 5 4 2
        if (a[left] > prev && a[left] < a[right]){
            cout << 'R';
            prev = a[right];
            right--;
        }
        else if (a[left] > prev && a[left] > a[right]){
            cout << 'R';
            prev = a[right];
            right--;
        }
        else {
            cout << 'L';
            prev = a[left];
            left++;
        }
    }
    cout << endl;
    //1 2 3 4 5 
    //7162
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
