#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

int main()
{
	CAbstractFactory* AbstractFactory = new CConcreteFactory1();

	//CConcreteProductA1* ProductA1 = dynamic_cast<CConcreteProductA1*>(AbstractFactory->createProductA());
	CProductA* ProductA1 = AbstractFactory->createProductA();

	ProductA1->Function();

	return 0;
}