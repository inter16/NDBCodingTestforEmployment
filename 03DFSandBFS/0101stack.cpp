#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main() {
	s.push(1);
	s.push(5);
	s.pop();
	s.push(2);
	s.push(3);

	while (!s.empty()) {
		cout << s.top() << ' ';
		s.pop();
	}
}