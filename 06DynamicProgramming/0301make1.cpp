#include <iostream>

int x;
int calc[30001];

using namespace std;


int main() {
	cin >> x;
	
	for (auto i = 2; i <= x; i++) {
		if (i % 5 == 0 && calc[i / 5] < calc[i - 1]) {
			calc[i] = calc[i / 5] + 1;
		}
		else if (i % 3 == 0 && calc[i / 3] < calc[i - 1]) {
			calc[i] = calc[i / 3] + 1;
		}
		else if (i % 2 == 0 && calc[i / 2] < calc[i - 1]) {
			calc[i] = calc[i / 2] + 1;
		}
		else {
			calc[i] = calc[i - 1] + 1;
		}
	}

	// �ǵ�� 1. min �Լ� ����� ��
	// �ǵ�� 2. 5�� �����°ͺ��� 2�� �����°��� ��������

	cout << calc[x];
}