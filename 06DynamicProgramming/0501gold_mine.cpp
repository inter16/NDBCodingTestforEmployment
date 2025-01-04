#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t;
int n, m;
int arr[1001][22][22];
int rou[1001][22][22];
int resu;

int main() {
	cin >> t;
	cin >> n >> m;

	for (auto i = 1; i <= t; i++) {
		for (auto j = 1; j <= n; j++) {
			for (auto k = 1; k <= m; k++){
				cin >> arr[i][j][k];
			}
		}
	}

	for (auto i = 1; i <= t; i++) {
		resu = 0;
		for (auto j = 1; j <= m; j++) {
			for (auto k = 1; k <= n; k++) {
				rou[i][k][j] = max(rou[i][k - 1][j - 1], max(rou[i][k][j - 1], rou[i][k + 1][j - 1])) + arr[i][k][j];
				resu = max(resu, rou[i][k][m]);
			}
		}


		cout << resu << '\n';
	}

	return 0;
}