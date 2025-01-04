#include <iostream>
#include <algorithm>

int n, m;
int curren[101];
int m_result[10001];

using namespace std;

bool ch1, ch2;

int main() {
	cin >> n >> m;

	for (auto i = 1; i <= n; i++) {
		cin >> curren[i];
	}

	// curren은 주소값을 의미

	for (auto i = 1; i <= m; i++) {

		ch1 = false;
		ch2 = false;
		for (auto j = 1; j <= n; j++) {
			if (i >= curren[j]) {
				ch1 = true;
				if (m_result[i - curren[j]] != -1) {
					ch2 = true;
					if (m_result[i] == 0) {
						m_result[i] = m_result[i - curren[j]] + 1;
					}

					else {
						m_result[i] = min(m_result[i - curren[j]] + 1, m_result[i]);
					}
				}
			}
			
		}

		if (!ch1 || !ch2) {
			m_result[i] = -1;
		}
	}

	cout << m_result[m];

}