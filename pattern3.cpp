#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
	int val = 1;
	// loop for row
	while (i <= n) {
		int k = 1;         // counter for spaces
		// loop for the spaces
		while (k <= n - i) {
			cout << " ";
			k = k + 1;
		}

		int j = 1;
		//loop for number 
		while (j <= i) {
			cout << val;
			j = j + 1;
			val = val + 1;
		}
		cout << endl;
		i = i + 1;
	}
}

