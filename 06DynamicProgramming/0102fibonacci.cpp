#include <iostream>
#include <vector>

using namespace std;

// 피보나치는 트리로 표현 가능
// 내가 짠 코드가 다이나믹 프로그래밍 방식

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
