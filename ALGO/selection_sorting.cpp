#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void selection_sort(){
    int arr [5] = { 5,4,3,2,1};


    for(int i = 0;i<5 -1;i++){
        for(int j = i + 1;j<5;j++){
            if(arr[i] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0;i< 5;i++){
        cout << arr[i] << endl;
    }


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


    selection_sort();

	return 0;
}

// for(int x: arr ){ }
