

#include <iostream>
using namespace std;
int main() {
/*Pointers 

1) WHen initializing use * after type
int* p;
int *p; //no difference in placement for compiler for *p or int*
string* q;
double* q;

2)
& - is the address opperator, retrieves the address of the variable.


*/
 
    int x = 25;
    int* p = &x; // &x will get the address assosiated with x, *p will point to and hold that address.

    //print address
    cout << p << endl;
    cout << &x << endl; //same result;

    //print value stored in that address, x = 25 in this example.
    cout << *p << endl;
    cout << x << endl; // same result;

    //below are same results as *p stores the value of x currently
    x = x + 5;
    x = *p + 5;
    *p = x + 5;
    *p = *p + 5;

    //using &*p
    cout << &*p << endl; //*& pairing cancels out, leaving just p. This will get the address of *p which is the same as &x
    
    //summary, pointers point to address. &x gets address, *p gets value off memory. 
    return 0;
}

