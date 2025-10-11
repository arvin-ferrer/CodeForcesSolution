#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;
  while(n--){
    string word;
    string mirrored;
    cin >> word;
    for (int i = 0; i < word.size(); i++){
      if (word[i] == 'p'){
        mirrored+= 'q';
      }
      else if(word[i] == 'q'){
        mirrored += 'p';
      }
      else{
        mirrored += 'w';
      }
    }
    reverse(mirrored.begin(), mirrored.end());
    cout << mirrored << endl;
    
  }
}
