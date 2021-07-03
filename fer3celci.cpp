#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  	
    int start , end, stepSize;
    cin >> start >> end >> stepSize;
    float celValue = 0; 
    while ( start <= end ){
        celValue = (( start - 32 ) *5 )/ 9;
        cout<< start<< "\t"<< celValue << endl;
        start = start + stepSize;
         
        
    }
}
