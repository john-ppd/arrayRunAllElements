/*
 * rangeBasedFor.cpp
 *
 *  Created on: Mar 10, 2020
 *      Author: Elgazzar
 */


#include <iostream>
using namespace std;
double sum = 0.0;
int main() {

    double time[300] = { 0.0,0.1,0.2,0.3,0.4 };

    for (double t : time)//displays them all!
        cout << t << endl;
    return 0;
}

