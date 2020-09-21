#include <iostream>
using namespace std;

int main()
{
	const int YEN_PER_DOLLARS = 111; 
	const float EUROS_PER_DOLLARS = 0.86;
	float DOLLAR;

		cout << "How much dollars do you want to convert?"<<" ";
		cin >> DOLLAR;

		//CALCULATIONS	
		float YEN_CONVERSION = (DOLLAR * YEN_PER_DOLLARS);
		float EURO_CONVERSION = (DOLLAR * EUROS_PER_DOLLARS);

		//OUTPUTS
		cout << "Dollars to Yen=" << YEN_CONVERSION <<" "<< endl;
		cout << "Dollars to Euro" << EURO_CONVERSION <<" "<< endl;

			return 0;
}