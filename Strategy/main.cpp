#include "Cache.h"
#include "FIFOReplaceAlgorithm.h"

int main()
{
	CCache<CFIFOReplaceAlgorithm> Cache;
	Cache.replace();

	return 1;
}