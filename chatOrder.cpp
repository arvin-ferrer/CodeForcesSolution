/*
  Created by: acferrer
*/

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef unordered_map<int, int> u_map;
typedef unordered_map<ll, ll> ll_map;
void solve() {
    int n;
    cin >> n;
    list<string> stack;
    unordered_map<string, list<string>::iterator> pos;

    for (int i = 0; i < n; i++) {
        string person;
        cin >> person;

        if (pos.count(person)) {
            stack.erase(pos[person]); // remove old
        }
        stack.push_back(person);
        pos[person] = prev(stack.end()); // update position
    }

    for (auto it = stack.rbegin(); it != stack.rend(); ++it) {
        cout << *it << '\n';
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
   solve();
  

}
