
#include<bits/stdc++.h>
using namespace std;


void tests();

int main() {

	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		tests();
	}

	return 0;
}


void tests() {
	int n ; cin >> n;

	int B[n];
	for (int i = 0; i < n; i++) {
		cin >> B[i];
		B[i]--;
	}

	int val = 2;

	std::vector<int> A(n , 0);
	for (int i = n - 1; i >= 0; i--) {
		if (A[B[i]] != 0 ) {
			A[i] = A[B[i]];
		} else {
			A[i] = val;
			val++;
		}
	}

	for (auto x : A) {
		cout << x << " ";
	}

	cout << '\n';


}