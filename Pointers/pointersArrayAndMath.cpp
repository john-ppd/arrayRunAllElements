#include <iostream>

using namespace std;

int main()
{
	int arrayInt[3];
	int* arrayAddress1 = &arrayInt[0];
	int* arrayAddress2 = &arrayInt[1];
	int* arrayAddress3 = &arrayInt[2];

	cout << "Taking sizeof(arrayInt[0]) we can see how many bytes of storage each array location takes and also how much memory we need to increment if going to the"
		<< " next value (changes due to machine age sometimes) an int is bytes = " << sizeof(arrayInt[0]) << endl;

	cout << "Memory location for arrayAddress1 is : " << arrayAddress1 << endl;
	cout << "Memory location for arrayAddress2 is : " << arrayAddress2 << endl;//memory increments by 4 bytes because int = 4 bytes
	cout << "Memory location for arrayAddress3 is : " << arrayAddress3 << endl;

	//if you use math with memory addresses it only changes the element it points too, not the value example:
	cout << arrayAddress1 + 1 << endl; // this will move the pointer to the next int memory location (i.e 4 bytes up from arrayAddress1) memory location. Can be used to go through an array.

	//incrementing a pointer is supposed to increment sequential ones I believe, I have only the one increment and attempt to store on the same memory address as the next one tho, look into it.
	arrayAddress1++;
	cout << "Memory location for arrayAddress1 is : " << arrayAddress1 << endl;
	cout << "Memory location for arrayAddress2 is : " << arrayAddress2 << endl;//memory increments by 4 bytes because int = 4 bytes
	cout << "Memory location for arrayAddress3 is : " << arrayAddress3 << endl;

	return 0;
}