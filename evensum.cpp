#include<iostream>
using namespace std;


int main(){

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
    
    int n;
    cin >> n;
    int d = 1 , sum = 0;
    while (d <= n ){
        if ( d % 2 == 0){ // another approch will me increment d by 2 eg. d = d + 2 
            sum = sum + d;
        }
        d = d+1;
    }
    cout << sum << endl;
  
}