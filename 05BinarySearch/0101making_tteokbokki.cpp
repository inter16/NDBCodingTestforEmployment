#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[1000001];
int tteok_cut;
int tteok;

int main() {
	cin >> n >> m;

	for (auto i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	sort(arr+1, arr+n+1);

	tteok_cut = arr[n];
	
	int st = 1;
	int accu = 0;

	while (1) {
		
		tteok_cut--;
		st = 1;

		for (auto i = 1; i < n; i++) {
			if (tteok_cut >= arr[n - i]) {
				break;
			}
			st++;
		}

		accu += st;

		if (accu >= m) {
			cout << tteok_cut;
			return 0;
		}


	}
}