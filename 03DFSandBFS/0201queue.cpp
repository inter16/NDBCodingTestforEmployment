#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
	q.push(1);
	q.push(5);
	q.pop(); // �����⸸ �Ѵ�.
	q.pop();
	q.push(1);
	q.push(2);
	q.push(3);

	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
}
