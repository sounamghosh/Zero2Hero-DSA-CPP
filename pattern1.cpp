#include <iostream>
using namespace std;

/*
1  
12 
123
1234
*/

int main() {
	int n;                      // value of rows 
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;                  
	while (i <= n) {            // this loop will print rows 
		int j = 1;
		while (j <= i) {        // this loop will print columns
			cout << j;          // dont include endl that will cause presentationError
			j = j + 1; 
		}
		cout << endl;
		i = i + 1;
	}
}

