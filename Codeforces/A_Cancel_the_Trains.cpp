#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;
typedef long long ll;

const int MAXN = 100 + 5;
int a[MAXN], b[MAXN];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int tc;
	cin >> tc;
	while (tc--) {
		int n, m;
		cin >> n >> m;

	

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			a[i] = x;
		}

		for (int i = 0; i < m; i++) {
			int x;
			cin >> x;
			b[i] = x;
		}
		int result = 0;
		for (int i = 0; i < m; i++) {
		
				//loop in tm
				//we inside tm
				for (int j = 0; j < n; j++) {
					//we in tn
					if (a[j] == b[i]) {
						result++;
					}
				}
			
		}
		cout << result << endl;
	}
}
