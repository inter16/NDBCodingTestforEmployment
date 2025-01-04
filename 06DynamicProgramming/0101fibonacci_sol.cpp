#include <iostream>

using namespace std;

int fibo(int x) {
	if (x == 1 || x == 2) {
		return 1;
		// 재귀 사용할 때 종료되는 지점 명시
		// 단점 : f2 여러 번 호출 O(2^N)
	}
	return fibo(x - 1) + fibo(x - 2);
}

int main(void) {
	cout << fibo(4) << '\n';
	return 0;
}