#include <iostream>
#include <algorithm>
#include <queue>

int n;
int att[2001];
int best_att[2001];
int att_out;
int sol_out;



using namespace std;

queue<int> q;

int main() {
	

	cin >> n;

	for (auto i = 1; i <= n; i++) {
		cin >> att[i];

		att_out = 0;
		sol_out = 0;
		while (!q.empty()) {
			q.pop();
		}

		for (auto j = 1; j <= i; j++) {
			if (i - j > 0 && att[i - j] < att[i]) {
				att_out += att[i - j];
				sol_out++;
				q.push(i-j);
			}
		}

		if (att_out <= att[i]) {
			best_att[i] = best_att[i - 1] + sol_out;
			while (!q.empty()) {
				att[q.front()] = 99999;
				q.pop();
			}
		}

		else {
			best_att[i] = best_att[i - 1] + 1;
			att[i] = 99999;
		}
	}

	cout << best_att[n];

}