#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n ; 
    cin >> n;
    
    int i = 1;
    
    while ( i <= n ){
        int k = 1;
        while (k <= n -i){
            cout << " ";
            k = k+1;
            
        }
        int j = 1;
    
        while (j <= i){
            cout << "*";
            j = j+ 1;
            int counter = 0;
            if ( j> i && i != 1){
                while ( counter != j -2){
                    cout<< "*";
                    counter = counter + 1;
                }
                

            }
        }
        cout << endl;
        i = i+ 1 ;
        
        
        
        
        
    }
  
}


