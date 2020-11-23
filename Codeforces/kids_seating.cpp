#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve(){
    int n ;
    cin >> n;

    for(int i = 1;i<=n;i++){
        cout << 4 * n - 2 * i << " ";

    }
    cout << "\n";


}




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);




    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }




	return 0;
}

// for(int x: arr ){ }

