#include <iostream>
using namespace std;

void prompt_count(int* size) {
	cout << "how many numbers will you enter? ";
	cin >> *size;
}

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

void populate_numbers(int* numbers, int size) {
	for (int* curr = numbers; curr < numbers + size; curr++) {
		cout << "Enter number: ";
		cin >> *curr;
	}
}

int countEvens(int* numbers, int size) {
	int evens = 0;
	for (int*curr = numbers; curr < numbers + size; curr++) {
		if (*curr % 2 == 0)
			evens++;
	}

	return evens;
}

int average(int *numbers, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + numbers[i];
	int avg = sum / size;
	cout << "average is " << avg << endl;
	return avg;
}

int numAboveAvg(int avg, int *numbers, int size) {
	int num = 0;
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > avg)
			num++;
	}
	return num;

}

int main()
{
	int nums;

	prompt_count(&nums);
	int* numbers = alloc_array(nums);
	populate_numbers(numbers, nums);
	cout << "you gave me " << countEvens(numbers, nums) << " evens.\n";
	int avg = average(numbers, nums);
	cout << "there are " << numAboveAvg(avg, numbers, nums) << " numbers above the average\n";


	delete[] numbers;
}