#include "SimpleFactory.h"
#include "ProductA.h"
#include "ProductB.h"

CProduct* CSimpleFactory::produce(char vProductID)
{
	switch (vProductID)
	{
	case 'A':
		return new CProductA();
		break;

	case 'B':
		return new CProductB();
		break;

	default:
		return NULL;
		break;
	}
}

