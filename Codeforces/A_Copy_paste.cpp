#include <iostream> 
#include <vector> 

using namespace std;
#define ll long long
#define pb push_back





void solve(){
    vector<int> c;

   int n,k;
   cin >> n >> k;

   for( int i = 0;i< n;i++){
       int x;
       cin >> x;
       c.push_back(x);
   }

    int result  = 0;

   for(int i = 1;i< c.size() + 1;i++){
       if(i == 2){
           break;
       }
    //    cout << i << endl;
       for(int j = 1;j< c.size() + 1;j++){
           if(i != j && i >= 1 && j <= n && c[j -1] < k && c[i -1] < k){
               result ++;
           }
       }
   }
//    cout << "--------------------_" << endl;

   cout << result   << endl;

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

