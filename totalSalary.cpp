#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int basic_s;
    char grade;
    cin >> basic_s >> grade;
    int allow = 0;
    
    if ( grade == 'A'){
        allow = 1700;
    }else if (grade == 'B'){
        allow  = 1500;
    }
    else{
        allow = 1300;
        
    }
    float totalSalary = (basic_s + (basic_s * 0.20) + (basic_s * 0.5) + allow) - basic_s * 0.11 ; 
    int roundedAmount = round(totalSalary);

    cout << roundedAmount<< endl;
    
	
}
