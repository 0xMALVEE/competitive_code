#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back






int Reverse (int num)
{
 int flag=0, r=0;

 //flag to check if number is negative
 if(num<0)
 flag=1;

 //Taking absolute value of number
 num=abs(num);

 //Reversing number digit by digit
 while(num>0)
 {
  r=r*10+num%10;
  num=num/10;
 }

 //if falg set make number negative
 if(flag==1)
 r=r*(-1);
 return r;
}



void solve(){
    string n ;
    cin >> n;
   
    cout << n.length() << endl;

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
