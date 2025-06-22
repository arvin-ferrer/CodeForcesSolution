#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<bool> used(n-1, false);
        for(int i = 0; i+1 < n; i++){
            if(!used[i] && a[i] > 0 && a[i+1] > 0){
                a[i]--;
                a[i+1]++;
                used[i] = true; 
            }
        }
        
        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}

