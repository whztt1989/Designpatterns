 #include "ConcreteAggregate.h"

int main()
{
	CConcreteAggregate* ConcreteAggregate = new CConcreteAggregate();
	CPassenger* Passenger1 = new CPassenger("�˿�1");
	CPassenger* Passenger2 = new CPassenger("�˿�2");

	ConcreteAggregate->add(Passenger1);
	ConcreteAggregate->add(Passenger2);

	CIterator* Iterator = ConcreteAggregate->createIterator();

	while (!Iterator->isEnd())
	{
		std::cout << Iterator->currentItem()->getName() << " ��Ʊ����" << std::endl;
		Iterator->next();
	}

	delete ConcreteAggregate;
	delete Passenger1;
	delete Passenger2;

	return 1;
}