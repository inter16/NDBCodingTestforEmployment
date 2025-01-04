#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> arr;

int main() {

	vector<int>::iterator a, b;
	vector<int>::iterator c;

	arr.push_back(3);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(3);
	arr.push_back(7);

	sort(arr.begin(), arr.end());

	a = upper_bound(arr.begin(), arr.end(), 3);
	b = lower_bound(arr.begin(), arr.end(), 3);
	c = arr.begin();

	cout << "\n" << a - b << "\n" << b - c << "\n" << a - c << "\n";

	// Ãâ·Â : 4 \n 2 \n 6

}