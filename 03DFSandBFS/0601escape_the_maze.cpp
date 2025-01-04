#include <iostream>
#include <algorithm>

int n, m;
int arr[201][201];
using namespace std;


int dfs(int a, int b, int walks) {

	arr[a][b] = 0;


	if (a == n && b == m) {
		return walks;
	}

	int c[4] = {0,};

	if (arr[a][b + 1] == 1 && b + 1 <= m) {
		c[0] = dfs(a, b + 1, walks + 1);
	}

	if (arr[a + 1][b] == 1 && a + 1 <= n) {
		c[1] = dfs(a + 1, b, walks + 1);
	}

	if (arr[a][b - 1] == 1 && b - 1 > 0) {
		c[2] = dfs(a, b - 1, walks + 1);
	}

	if (arr[a - 1][b] == 1 && a - 1 > 0) {
		c[3] = dfs(a - 1, b, walks + 1);
	}

	int temp = 0;

	for (auto i = 0; i < 4; i++) {
		
		if (c[i] > 0 && temp == 0) {
			temp = c[i];
		}

		else if (c[i] > 0 && temp > 0) {
			temp = min(temp, c[i]);
		}
	}

	return temp;

}

int main() {
	cin >> n >> m;
	
	for (auto i = 1; i <= n; i++) {
		for (auto j = 1; j <= m; j++) {
			scanf_s("%1d", &arr[i][j]);
		}
	}

	cout << dfs(1, 1, 1);

}