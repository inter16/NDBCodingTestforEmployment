#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>

using namespace std;

int n, m;

stack<int> s;
queue<int> q;

int arr[1001][1001];
bool visited[1001][1001];

int ice;


int dfs(int a, int b) {
	visited[a][b] = true;
	q.push(a * (m + 1) + b);

	/* 순서쌍 정리하기 : 
	queue<pair<int, int>> q;
	q.push({x, y})
	즉, pair <int, int>형 변수 i는
	i == {x, y}
	i.first == x
	i.second == y */

	if (!visited[a - 1][b] &&( a - 1 > 0 && arr[a - 1][b] == 0)) {
		q.push((a - 1) * (m + 1) + b);
	}

	if (!visited[a][b + 1] && (b + 1 <= m && arr[a][b + 1] == 0)) {
		q.push(a * (m + 1) + b + 1);
	}

	if (!visited[a + 1][b] && (a + 1 <= n && arr[a + 1][b] == 0)) {
		q.push((a + 1) * (m + 1) + b);
	}

	if (!visited[a][b - 1] && (b - 1 > 0 && arr[a][b - 1] == 0)) {
		q.push(a * (m + 1) + b - 1);
	}

	q.pop();
	if (!q.empty()) {
		dfs(floor(q.front() / (m + 1)), q.front() % (m + 1));
	}

	return 0;
}


int main() {

	cin >> n >> m;

	for (auto i = 1; i <= n; i++) {
		for (auto j = 1; j <= m; j++) {
			scanf_s("%1d", &arr[i][j]);			
		}
	}

	for (auto i = 1; i <= n; i++) {
		for (auto j = 1; j <= m; j++) {
			if (!visited[i][j] && arr[i][j] == 0) {
				dfs(i, j);
				ice++;
			}

			else visited[i][j] = true;
		}
	}

	cout << ice;
}