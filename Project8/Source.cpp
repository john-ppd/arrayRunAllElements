#include <iostream>
#include <vector>
using namespace std;
/*
1) need to use #include<vector>
2)use format of vector<DataType> nameOfVector
remember that when you define a data type to the vector it ONLY works with that data type.


Vectors resize automatically when you add or remove things from them, can be better for lists than arrays when you dont have predefined memory.

Useful commands
***************
myVector.push_back(value); adds an element to the END of the vector (also resizes it).
myVector.at(index) or myVector[index] returns value stored at that memory location
myVetor.size(); RETURNS UNSIGNED INT, important to declare other ints as unsigned if you're using together like in the for loop.
myVecor.begin(); reads vetor at first element(index) at first location or at [0]
myVector.insert(myVector.begin() + integer, newValue); must include .begin inside the insert. ADDS elements at specified index number shift rest right
-for the insert command the + integer is at what memory location you want to insert at +5 and itd insert at [5]
myVector.erase(myVecctor.begin() + integer); erases AT specified index(element).
myVector.empty(); is a boolean, true if the vector has no elements, false otherwise
myVector.clear(); clears all memory locations of the vector.
*/
int main()
{
	//2
	vector<int> anIntVector;

	anIntVector.push_back(3);
	anIntVector.push_back(2);//adds the value '2' to the end of the vector, as the last location on the vector
	anIntVector.push_back(1);

	for (unsigned int i = 0; i < anIntVector.size(); i++)
	{
		//This will print entire vector becaus you used .size();
		//make sure to use unsigned, error otherwise because its possible to return (-) values and the size of a vector is 0+ never (-).
		//keep in mind usigned int and int are different variables, like comparing double to int
		//cout << anIntVector.at(0) << endl;
		cout << anIntVector[i] << endl;//this and .at() are the same, upto preference

	}

	anIntVector.insert(anIntVector.begin() + 1, 10);
	for (unsigned int i = 0; i < anIntVector.size(); i++)
		cout << anIntVector[i] << endl;

	anIntVector.erase(anIntVector.begin() + 1);//will remove whats stored in [1]

	for (unsigned int i = 0; i < anIntVector.size(); i++)
		cout << anIntVector[i] << endl;

	cout << anIntVector.empty() << endl; // 0 for false, 1 for true

	anIntVector.clear();

	cout << anIntVector.empty() << endl; // 0 for false, 1 for true

	for (unsigned int i = 0; i < anIntVector.size(); i++)
		cout << anIntVector[i] << endl;

	return 0;
}