#include <iostream>

using namespace std;

/*
Pass by Value, passing a copy of a value of a variable to a function, it takes the given variable but not the variable itself.

Pass by reference, passes the variables address, therefore the function can actually change the variables value using the memory address //uses less cpu because it doesnt have to make constant copies of the variable.


*/

void passByValue(int x)
{
    x = 99; //only changes the value within this function
}

void passByReference(int *x)
{
    *x = 50; // will change the value of x itself to 50 even outside of this function
    //pretty much direct link to variable itself
}
int main() {

    int first = 13;
    int second = 20;

    passByValue(first);
    cout << first << endl; // first was changed in function only, still is original value after

    passByReference(&second); // we need to include & before the varialbe because we want to pass the address since we're using pointers, therefore use &second
    cout << second << endl;//seconds actual value changed to 50, started at 20, changed within the function itself.
    
    return 0;
}
