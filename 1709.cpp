/*
  Created by: acferrer
*/

#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef string s;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef unordered_map<int, int> u_map;

void solve(){
  int n;
  cin >> n;
  vi arr1(n);
  vi arr2(n);
  for (int i = 0; i < n; i++) cin >> arr1[i];
  for (int i = 0; i < n; i++) cin >> arr2[i];
  int count = 0;
  bool stat = true;
  vi ans;
  while(stat){
  if (is_sorted(arr1.begin(), arr1.end()) && is_sorted(arr2.begin(), arr2.end())){
    for (int i = 0; i < n; i++){
      if (arr1[i] < arr2[i]){
        continue;
      }
      else{
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
        // cout << 3 << ' ' << i+1 << endl;
        ans.push_back(3);
        ans.push_back(i+1);
        count++;
      }
    }
  }
  if (!(is_sorted(arr1.begin(), arr1.end()))){
    for (int i = 0; i < n; i++){
      for (int j = i+1; j < n; j++){
        if (arr1[i] > arr1[j]){
            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
            count++;
            // cout << 1 << ' ' << i+1 << endl;
            ans.push_back(1);
            ans.push_back(i+1);
        }
      }
    }
  }
  if (!(is_sorted(arr2.begin(), arr2.end()))){
    for (int i = 0; i < n; i++){
      for (int j = i+1; j < n; j++){
        if (arr2[i] > arr2[j]){
            int temp = arr2[i];
            arr2[i] = arr2[j];
            arr2[j] = temp;
            count++;
            // cout << 2 << ' ' << i+1 << endl;
            ans.push_back(2);
            ans.push_back(i+1);
        }
      }
    }
  }
  if (is_sorted(arr1.begin(), arr1.end()) && is_sorted(arr2.begin(), arr2.end())){
    bool stat = true;
    for (int i = 0; i < n; i++){
      if (arr1[i] > arr2[i]) stat = false;
    }
    if (stat) break;
  }

}

  cout << count << endl;
  for (int i = 0; i < ans.size()-1; i++){
    if (i % 2 != 0){
      cout << endl;
    }
    else{
      cout << ans[i] << ' ';
    }
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


}
