#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter n"  << endl;
	cin >> n;

	int i = 1;
    
	// int val = 1;
	while (i <= n) {
        int k = 1;
        while (k <= n - i){
            cout<<" ";
            k = k+1;
        }
        int j = 0;
        while (j < i) {
            
            cout<< i + j;
            j = j + 1;
            // cout << j << j+1;
			//cout << val;
			//val = val + 1;
		}
		cout << endl;
		i = i + 1;
	}
}

// 1
// 2 3
// 3 4 5 
// 4 5 6 7

