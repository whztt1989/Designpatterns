#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"

int main()
{
	CAbstractFactory* Factory = new CConcreateFactoryA();
	
	CProduct* Product = Factory->createProduct();
	Product->Function();
	 
	return 0;
}