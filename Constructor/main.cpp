#include "Builder.h"
#include "Director.h"
#include "AppleComputer.h"
#include "LenovoComputer.h"

int main()
{
	CLenovoComputer LenovoComputer;
	CDirector Director(&LenovoComputer);

	Director.createComputer();

	return 1;
}