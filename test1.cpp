#include <iostream>
using namespace std;   
int main()
{
    int a = 10, b = 20, c = 30;
    // cout<< !b<<endl;
    if(a <= b && !b) {   // first part 1 and second part 0 means it is 0 or False cause, ( !b = 0)
        cout << "hello";
    }
    else if(c >= a && c >= b) { // first part true and second part is also true so the final outcome is true
        cout << "hi";
    }
    else {
        cout << "hey";
    }
}
