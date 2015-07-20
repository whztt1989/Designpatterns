#include "AppleComputer.h"
#include "DellComputer.h"
#include "HPComputer.h"
#include "LinuxOs.h"
#include "WindowsOs.h"
#include "MacOs.h"

int main()
{
	CAppleComputer* AppleComputer = new CAppleComputer();
//	CDellComputer* DellComputer = new CDellComputer();
	CDellComputer DellComputer;
	CHPComputer* HPComputer = new CHPComputer();

	CMacOS MacOS;
	//CLinuxOS* LinuxOS = NULL;
	CWindowsOS* WindowsOS = new CWindowsOS();

	AppleComputer->InstallOS(&MacOS);
	DellComputer.InstallOS(&MacOS);
	HPComputer->InstallOS(WindowsOS);

	return 1;
}