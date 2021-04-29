#include <iostream>
#include "BoxOffice.hpp"
using namespace std;

void Customer::action()
{
	int num = 0;
	std::cout << "Enter the number of purchase: \n" << endl;
	std::cin >> num;
	std::cout << "You successfully purchased " << num << " tickets of Godzilla vs. Kong.\n" << endl;
	std::cout << "Paid $" << num * 10 << " in total.\n" << endl;
}

Conductor::Conductor(Customer* cur_Selling)
{
	std::cout << "Currently showing: \n" << endl;
	std::cout << "Godzilla vs. Kong" << endl;
	_selling = cur_Selling;
}

void Conductor::action()
{
	std::cout << "Each ticket is $10." << endl;
	_selling -> action();
}

int main()
{
	Customer* _SubCustomer = new Customer();
	Conductor* _ProConductor = new Conductor(_SubCustomer);
	_ProConductor -> action();
	delete _ProConductor;
	delete _SubCustomer;
	system("pause");
	return 0;
}
