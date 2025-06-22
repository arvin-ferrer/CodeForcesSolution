#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b;
    vector <int> c;
    
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    set <int> s(a.begin(), a.end());
    sort(a.begin(), a.end());
    if (s.size() == 1){
      cout << -1 << endl;
    }
    else{
      if (a[0] == 1){
        c.push_back(a[0]);
      }
      else if(a[0] == a[1]){
        c.push_back(a[0]);
      }
      else{
        b.push_back(a[0]);
      }
    for(int i = 1; i < n; i++){
      if (a[i] == a[0]){
        c.push_back(a[i]);
      }
      else if(a[i] == 1){
        c.push_back(a[i]);
      }
      else if (a[0] == 1){
        b.push_back(a[i]);
      }
      else{
        c.push_back(a[i]);
      }
    }
      //2 4 4
      //1 2 4 3 5
      //2
      //4 4
      //2 4 3 5
      //1
    if (b.size() == 0 || c.size() == 0) cout << -1 << endl;
    else{
      cout << b.size() << " " << c.size() << endl;
      for(int i: b) cout << i << " ";
      cout << endl;
      for(int i: c) cout << i << " ";
      cout << endl;
    }
  }
    cout << endl;
}
}
