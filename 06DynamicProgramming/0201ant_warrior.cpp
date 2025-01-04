#include <iostream>


using namespace std;

int k[101];
int n;
int a[101];



int main() {

	cin >> n;

	for (auto i = 1; i <= n; i++) {
		cin >> k[i];
	}

	a[1] = k[1];

	for (auto i = 2; i <= n; i++) {
		if (a[i - 1] > a[i - 2] + k[i]) {
			a[i] = a[i - 1];
		}

		else a[i] = a[i - 2] + k[i];
	}

	cout << a[n];
	
	return 0;
}
