#include "SimpleFactory.h"

int main()
{
	CSimpleFactory Factory;

	CProduct* Product = Factory.produce('A');
	Product->Function();

	return 0;
}