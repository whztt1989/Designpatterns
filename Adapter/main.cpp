#include "Player.h"
#include "Forwards.h"
#include "Center.h"
#include "Guards.h"
#include "PlayerAdapter.h"

int main()
{
	CPlayer* Forward = new CForwards("���");
	CPlayer* Center = new CCenter("Ҧ��");
	CPlayer* Guards = new CGuards("�Ʊ�");
	CPlayer* Foreigner = new CPlayerAdapter("�������Ա");


	Forward->attack();
	Forward->Defense();

	Foreigner->attack();
	Foreigner->Defense();

	return 1;
}