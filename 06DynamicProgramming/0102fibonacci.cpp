#include <iostream>
#include <vector>

using namespace std;

// �Ǻ���ġ�� Ʈ���� ǥ�� ����
// ���� § �ڵ尡 ���̳��� ���α׷��� ���

int x1 = 1, x2 = 1;

int fibonacci(int y1, int y2, int n) {
	vector<int> y(1000);
	y[1] = y1;
	y[2] = y2;
	for (auto i = 3; i <= n; i++) {
		y[i] = y[i - 1] + y[i - 2];
	}
	return y[n];
}


int main() {
	cout << fibonacci(x1, x2, 4);
	return 0;
}
