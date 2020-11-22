#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};

    int counter = 1;
    while(counter < n - 1){
        for(int i = 0;i< n - counter; i++){
            if(arr[i] > arr[i + 1]){
                int temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter ++;
    }

    for(int i = 0;i< 5;i++){
        cout << arr[i] << endl;
    }
}




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    solve();







	return 0;
}

// for(int x: arr ){ }
