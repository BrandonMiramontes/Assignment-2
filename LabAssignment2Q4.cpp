#include <iostream>  
#include <cstdlib>      

using namespace std;

int main()
{
	unsigned seed;
	cout << "input seed:" << " " << endl;
	cin >> seed;
	
	srand(seed);

	//define variables 
	int randomNumber1, randomNumber2;
	
	randomNumber1 = rand();
	randomNumber2 = rand();

	//calculations 
	int SUM_OF_RANDOM_NUMBERS = randomNumber1 + randomNumber2;

	//outputs
	cout << "First random number:" << randomNumber1 << "     " << endl;
	cout << "Second random Number:" << randomNumber2 << "     " << endl;
	cout << "Sum of both random numbers: " << SUM_OF_RANDOM_NUMBERS << "     " << endl;


	return 0;
}
