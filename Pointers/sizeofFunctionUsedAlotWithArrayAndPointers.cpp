#include <iostream>

using namespace std;

/*
sizeof tells you in bytes how large an array or char double int... is, even string is constant amount of bytes at 28.

*/
int main()
{
	char c = 'p';
	int i = 150;
	double d = 12.21;
	string s = "test";
	double doubleArray1[1];
	double doubleArray10[10];
	double doubleArray20[20];

	cout << "size of char in bytes = " << sizeof(c) << endl; // will output the amount of bytes in storage a variable type takes.
	cout << "size of int in bytes = " << sizeof(i) << endl;
	cout << "size of double in bytes = " << sizeof(d) << endl;
	cout << "size of string in bytes = " << sizeof(s) << endl;
	cout << "size of 1 item list array is = " << sizeof(doubleArray1) << endl; // same memory space as a single double variable even though its an array.
	cout << "size of 10 item list array is = " << sizeof(doubleArray10) << endl;
	cout << "size of 20 item list array is = " << sizeof(doubleArray20) << endl;



	//To find the amount of elements within an array take the sizeof(theArray) and then divide it by the sizeof(theArray[0]) this will result in the number of entries.
	cout << "through calculation we find that the number of entries stored in the array is " << sizeof(doubleArray20) / sizeof(doubleArray20[0]) << endl;



	return 0;
}
