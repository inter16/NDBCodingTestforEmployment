#include<iostream>
#include<vector>

using namespace std;

int n, m;

cin >> n >> m;

int a = n * m;

bool visited[a+1];
vector<int> graph[a+1];



void dfs(int start) {
	visited[start] = true;
	cout << start << ' ';
	for (auto i = 0; i < graph[start].size(); i++) {
		int y = graph[start][i];
		if (!visited[y]) dfs(y);
	}
}

int main() {
	graph[1] = {2, 6};
	graph[2] = {1, 6, 7};
	graph[5] = {};
	graph[6] = { 1, 7 };
	graph[7] = { 2, 6, 8 };
	graph[8] = { 7 };
	graph[16] = { 17 };
	graph[17] = { 16, 18 };
	graph[18] = { 17, 19 };
	graph[19] = { 18, 20 };
	graph[20] = { 19 };
}