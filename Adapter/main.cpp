#include "Player.h"
#include "Forwards.h"
#include "Center.h"
#include "Guards.h"
#include "PlayerAdapter.h"

int main()
{
	CPlayer* Forward = new CForwards("麦迪");
	CPlayer* Center = new CCenter("姚明");
	CPlayer* Guards = new CGuards("科比");
	CPlayer* Foreigner = new CPlayerAdapter("外国人球员");


	Forward->attack();
	Forward->Defense();

	Foreigner->attack();
	Foreigner->Defense();

	return 1;
}