#include <iostream>

using namespace std;

float totalCost()
{
    float total;

    float rentMortagePaymant, phonePayment, internetUtilities, cablePayment;

        cout << "What is your monthlty rent or mortage payment:" << endl;
    cin >> rentMortagePaymant;

    cout << "What is your monthlty phone payment:" << endl;
    cin >> phonePayment;

    cout << "What is your monthlty internet utility payment:" << endl;
    cin >> internetUtilities;

    cout << "What is your monthlty cable payment:" << endl;
    cin >> cablePayment;

    total = rentMortagePaymant + phonePayment + internetUtilities + cablePayment;
    return total;
}

int main()
{
    float total;
    total = totalCost();

    cout << "The total monthly cost is " << total << endl;

    return 1;
}