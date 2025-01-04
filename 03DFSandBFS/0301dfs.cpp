#include <iostream> // 표준 입출력
#include <vector> // vector 사용
// STL에는 vector, list, 


using namespace std;
/* 원래 std::cout 이지만
import namespace.std */

bool visited[9]; // c++은 자동으로 false 초기화
vector<int> graph[9];
/* '길이가 9인 int 배열'의 벡터
장점 : 벡터는 길이 지정 필요 x*/

void dfs(int v) {
	// 전역변수 이용해서 간단히 (python도 가능)
	// v = 1 일때
	visited[v] = true;

	cout << v << ' ';
	for (auto i = 0; i < graph[v].size(); i++)
	{ // v번째 행의 int 배열 사이즈 size()

		int y = graph[v][i];
		if (!visited[y]) dfs(y);
	}
}

int main() {
	graph[1] = { 2, 3, 8 };
	graph[2] = { 1, 7 };
	graph[3] = { 1, 4, 5 };
	graph[4] = { 3, 5 };
	graph[5] = { 3, 4 };
	graph[6] = { 7 };
	graph[7] = { 2, 6, 8 };
	graph[8] = { 1, 7 };

	dfs(1);

	return 0;
}
