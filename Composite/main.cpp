#include "Company.h"
#include "ChildCompany.h"
#include "FinancialDepartment.h"
#include "HumanResourceDepartment.h"
#include "SalesDepartment.h"

int main()
{
	CChildCompany* Company = new CChildCompany("北京总公司");
	Company->add(new CFinancialDepartment("总公司财务部"));
	Company->add(new CHumanResouceDepartment("总公司人力资源部"));
	Company->add(new CSalesDepartment("总公司销售部"));

	CChildCompany* ChildCompany = new CChildCompany("成都子公司");
	ChildCompany->add(new CFinancialDepartment("成都子公司财务部"));
	ChildCompany->add(new CHumanResouceDepartment("成都子公司人力资源部"));
	ChildCompany->add(new CSalesDepartment("成都子公司销售部"));
	Company->add(ChildCompany);

	Company->show(1);
	system("pause");
	return 1;
}