#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back





int binary_search(){
    int key = 4;
    int arr[5] = {1,2,3,4,5};
    int s = 0;
    int n = 5;

    while(s<=n){
        int mid = (s + n)/2;

        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            n = mid - 1;
        }else{
            s = mid + 1;
        }

    }
    return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    cout << binary_search() << endl;







	return 0;
}

// for(int x: arr ){ }
