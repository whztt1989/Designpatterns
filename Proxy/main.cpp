#include "Pursuit.h"
#include "PursuitProxy.h"
#include "RealPursuit.h"

int main()
{
	CPursuit* Pursuit = new CPursuitProxy("Zhang san pursuit girl");

	Pursuit->_sentFlowersV();
	Pursuit->_sentDollsV();
	Pursuit->_sentChocolateV();

	return 1;
}