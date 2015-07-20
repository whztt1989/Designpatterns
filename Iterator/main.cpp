 #include "ConcreteAggregate.h"

int main()
{
	CConcreteAggregate* ConcreteAggregate = new CConcreteAggregate();
	CPassenger* Passenger1 = new CPassenger("³Ë¿Í1");
	CPassenger* Passenger2 = new CPassenger("³Ë¿Í2");

	ConcreteAggregate->add(Passenger1);
	ConcreteAggregate->add(Passenger2);

	CIterator* Iterator = ConcreteAggregate->createIterator();

	while (!Iterator->isEnd())
	{
		std::cout << Iterator->currentItem()->getName() << " ÂòÆ±À²£¡" << std::endl;
		Iterator->next();
	}

	delete ConcreteAggregate;
	delete Passenger1;
	delete Passenger2;

	return 1;
}