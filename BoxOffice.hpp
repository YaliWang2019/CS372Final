#include <iostream>
using namespace std;

// Base class
class Selling
{
public:
	virtual void action() = 0;
};

// Customer class
class Customer :public Selling
{
public:
	void action() override;
};

// Conductor class
class Conductor :public Selling
{
public:
	Conductor(Customer* cur_Selling);
	void action() override;
private:
	Customer* _selling;
};
