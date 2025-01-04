#include <iostream> // ǥ�� �����
#include <vector> // vector ���
// STL���� vector, list, 


using namespace std;
/* ���� std::cout ������
import namespace.std */

bool visited[9]; // c++�� �ڵ����� false �ʱ�ȭ
vector<int> graph[9];
/* '���̰� 9�� int �迭'�� ����
���� : ���ʹ� ���� ���� �ʿ� x*/

void dfs(int v) {
	// �������� �̿��ؼ� ������ (python�� ����)
	// v = 1 �϶�
	visited[v] = true;

	cout << v << ' ';
	for (auto i = 0; i < graph[v].size(); i++)
	{ // v��° ���� int �迭 ������ size()

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
