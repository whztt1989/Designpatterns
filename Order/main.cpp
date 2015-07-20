#include "OrderCommand.h"
#include "SetbillCommand.h"
#include "WaiterInvoker.h"
#include "BossReceiver.h"

int main()
{
	CWaiterInvoker Waiter;
	//CBossReceiver Boss;

	CCommand* Command1 = new COrderCommand(1, 10);
	CCommand* Command2 = new CSetbillCommand(1, 10);
	CCommand* Command3 = new COrderCommand(2, 20);

	Waiter.setOrder(Command1);
	Waiter.setOrder(Command3);
	Waiter.setOrder(Command2);
	
	Waiter.cancelOrder(Command2);
	Waiter.callCommand();

	delete Command1;
	delete Command2;
	delete Command3;

	return 1;
}