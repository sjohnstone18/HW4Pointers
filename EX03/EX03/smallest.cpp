#include <iostream>
using namespace std;
int numbers[8] = {1, 2, 4, 5, 10, 100, 2, -22};


int main(){


	int*array = numbers;
	int setnumber = 0;
	int checker = 10000;
	for (int i =0; i<8; i++)
	{
		
		if (array[i] < checker)
		{
			checker = array[i];
			setnumber = i;
		}
	}
	cout << "lowest value is the " << setnumber << "  of the array at the value of " << checker << endl;
	return 0;
}