#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
typedef long long ll;



int fact(int x) {
	if (x <= 1) {
		return 1;
	}
	else {
		return x * fact(x - 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	/*
	vector < vector<int> > d = { {1,23} };
	
	d.push_back({ 3,4 });
	cout << d[1][1] << endl;
*/




	int tc;
	cin >> tc;
	while (tc--) {
		int n;
        cin >> n;
        if (n == 1){
        cout << 0 << endl;
        } else if (n == 2){
        cout << 1 << endl;
        } else if (n == 3){
        cout << 2 << endl;
        } else if (n % 2 == 0){
        cout << 2 << endl;
        } else {
        cout << 3 << endl;
        }
	}



	
}
