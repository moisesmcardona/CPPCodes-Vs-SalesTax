#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double total, state, local;
	cout << "Please input the total sales for the month: $";
	cin >> total;
	while (total < 0)
	{
		cout << "Value cannot be negative: $";
		cin >> total;
	}
	cout << "Please input the state tax percentage in decmal form (.02 for 2%) ";
	cin >> state;
	while (state < 0)
	{
		cout << "Value cannot be negative: ";
		cin >> state;
	}
	cout << "Please input the local tax percentage in decimal form (.02 for 2%) ";
	cin >> local;
	while (local < 0)
	{
		cout << "Value cannot be negative: ";
		cin >> local;
	}
	cout << "The total sales for the month is $" << setprecision(2) << fixed << showpoint << total << '\n';
	cout << "The state tax for the month is $" << setprecision(2) << fixed << showpoint << total * state << '\n';
	cout << "The local tax for the month is $" << setprecision(2) << fixed << showpoint << total * local << '\n';
	system("pause");
	return 0;
}