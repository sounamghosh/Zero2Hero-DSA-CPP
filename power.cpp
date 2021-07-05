#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x  , n ;
    cin >> x>> n;
    int count = 0;
	int new_x = 1;
	if ( n == 0 ){
		cout << 1 << endl;
	}else{
		while ( count < n ){
        new_x = new_x * x;
        count = count + 1;
		
    }
	cout << new_x << endl;
	}

}
