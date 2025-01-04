#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool visited[9];
vector<int> graph[9];

queue<int> q;

void bfs(int start) {
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int v = q.front();
		q.pop();
		cout << v << ' ';
		
		for (auto i = 0; i < graph[v].size(); i++) {
			int y = graph[v][i];
			if (!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
	return;
}

int main() {
	graph[0] = {};
	graph[1] = { 2, 3, 8 };
	graph[2] = { 1, 7 };
	graph[3] = { 1, 4, 5 };
	graph[4] = { 3, 5 };
	graph[5] = { 3, 4 };
	graph[6] = { 7 };
	graph[7] = { 2, 6, 8 };
	graph[8] = { 1, 7 };

	bfs(1);

	return 0;
}