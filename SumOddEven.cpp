#include<iostream>
using namespace std;

int main()  { 

    int n, num, even_s = 0, odd_s = 0;
    cin >> n ;
    while ( n > 0){
        num = n %10;
        if ( num % 2 == 0){
            even_s = even_s + num;
            

        }else{
            odd_s = odd_s + num;
        }
        cout << even_s <<odd_s <<endl;
        n = n /10;
    }




}