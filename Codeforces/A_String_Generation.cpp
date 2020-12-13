#include <bits/stdc++.h>
#define F0R(i, a) for (int i=0; i<(a); i++)
using namespace std;

using namespace std;
#define ll long long
#define pb push_back
void solve(){
    int n , k;
    cin >> n >> k;
	string str = "abc";
    for(int i = 0;i<n;i++){
		cout << str[i%3];
	}
	cout << endl; 
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


