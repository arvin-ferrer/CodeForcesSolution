#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while (n--){
    int clocks;
    cin >> clocks;
    vector <int> array(clocks);
    
    for (int i = 0; i < clocks; i++){
        cin >> array[i];
    }


    int mid = clocks/2;
    bool down = true,goods = true;
    
    for (int i = 0; i < clocks; i++) {
        if (array[i]<=i*2|| array[i] <= clocks*2-2-i*2) {
            cout << "NO\n";
            goods = false;
            break;
        }
    }

    if (goods) {cout<<"YES\n";}
       

}
	// ios::sync_with_stdio(false),cin.tie(0);
	// int T,n,i,t,flag;
	// for(cin>>T;T>0;T--)
	// {
	// 	cin>>n;
	// 	flag=0;
	// 	for(i=0;i<n;i++)
	// 	{
	// 		cin>>t;
	// 		if(t<=i*2||t<=(n-i-1)*2)flag=1;
	// 	}
	// 	if(flag)cout<<"NO\n";
	// 	else cout<<"YES\n";
	// }
	// return 0;
}
