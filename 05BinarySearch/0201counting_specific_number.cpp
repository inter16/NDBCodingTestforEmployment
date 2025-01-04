#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long int n, x;
vector<int> arr;
long long int a;
long long int b;


int bin_sear(vector<int>& w, int y, int z) {
	int mid = floor((y + z) / 2);

	if (y == mid) {
		return -1;
	}

	if (x == w[mid]) {
		w.erase(w.begin() + mid);
		return mid;
	}
	else if (x > w[mid]) {
		bin_sear(w, mid, z);
	}

	else if (x < w[mid]) {
		bin_sear(w, y, mid);
	}

}

// ���� Ž���� ���� ��� rindex = upper_bound(v.begin(), v.end(), rightValue)


int main() {

	cin >> n >> x;


	for (auto i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	
	while (1) {
		a = bin_sear(arr, 0, n-1-b);
		if (a == -1) {
			cout << b;
			return 0;
		}
		b++;
	}
	
	// while �� ���°��� ����! upper_bound, lower_bound ���� ���� Ž�� �Լ� ����
}