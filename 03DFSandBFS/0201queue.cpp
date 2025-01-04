#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
	q.push(1);
	q.push(5);
	q.pop(); // 꺼내기만 한다.
	q.pop();
	q.push(1);
	q.push(2);
	q.push(3);

	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
}
