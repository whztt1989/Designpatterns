#include "Tenant.h"
#include "HouseAgent.h"
#include "Landlord.h"

int main()
{
	CHouseAgent* HouseAgent = new CHouseAgent();
	CLandlord* Landlord1 = new CLandlord("Zhang San", "Two Houses");
	CLandlord* Landlord2 = new CLandlord("Li Si", "Three Houses");

	HouseAgent->registerHouse(Landlord1);
	HouseAgent->registerHouse(Landlord2);

	CTenant* Tenant = new CTenant("Two Houses", HouseAgent);
	Tenant->findHouse();

	delete HouseAgent;
	delete Landlord1;
	delete Landlord2;
	delete Tenant;

	return 1;
}