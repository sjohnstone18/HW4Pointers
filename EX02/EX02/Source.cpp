#include <iostream>
using namespace std;

int * doubleCapacity(const int *list, int size);

int * alloc_array(int size)
{
	// Allocate array
	int* pintarray = new int[size];

	// Initialize array
	for (int i = 0; i < size; i++)
		pintarray[i] = 42;

	// return array pointer
	return pintarray;
}

int main() {
	int input; 
	cin >> input;
	
	int *array = alloc_array(input);
	int *newArray = doubleCapacity(array, input);
		
	
	return 0;
}

int* doubleCapacity(const int *list, int size)
{
	//doubles the size
	int newSize = size * 2;
	//creates the new array
	int* doubleArray = new int[newSize];




	return doubleArray;
}
