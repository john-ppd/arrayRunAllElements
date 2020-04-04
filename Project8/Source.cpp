


#include <iostream>
using namespace std;
int main() {
    /*Pointers

    1) WHen initializing use * after type
    int* p;
    int *p; //no difference in placement for compiler for *p or int*
    string* q;
    double* q;

    after you define a pointer using *someVariable, to call the pointer only use someVariable
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

    //One more example
    int fish = 5;
    cout << &fish << endl;//will print out the memory address of fish variable;

    int* fishPointer;// creates a pointer called fishPointer and now we do not use * again on the variable, it has been defined as a pointer type;
    fishPointer = &fish; // point to the address of fish, will get the memory address of fish
    cout << fishPointer << endl; // will print the address of fish variable;

    //USING * again will get the variable  value from that address
    cout << *fishPointer << endl; // will print 5 because thats what's stored in the memory address
    return 0;
}
