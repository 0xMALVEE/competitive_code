#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve(){
    //Find min index of repeating number
    int n = 5;
    int arr[n] = {5,4,2,3,3,2,1};

    int index = 0;

    vector<int> indexs;
    int currentElement = 0;
    for(int i = 0;i< 5;i++){


        for(int j =i + 1;j< 5;j++){
            if(arr[i] == arr[j]){
                index = i;
                indexs.push_back(i);
            }
        }

    }



    int minNum = 899999999;
    for(int x : indexs){
        minNum = min(minNum,x);
    }

    cout << minNum << endl;
}




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    solve();







	return 0;
}

// for(int x: arr ){ }
