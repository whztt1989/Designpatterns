#include "Company.h"
#include "ChildCompany.h"
#include "FinancialDepartment.h"
#include "HumanResourceDepartment.h"
#include "SalesDepartment.h"

int main()
{
	CChildCompany* Company = new CChildCompany("�����ܹ�˾");
	Company->add(new CFinancialDepartment("�ܹ�˾����"));
	Company->add(new CHumanResouceDepartment("�ܹ�˾������Դ��"));
	Company->add(new CSalesDepartment("�ܹ�˾���۲�"));

	CChildCompany* ChildCompany = new CChildCompany("�ɶ��ӹ�˾");
	ChildCompany->add(new CFinancialDepartment("�ɶ��ӹ�˾����"));
	ChildCompany->add(new CHumanResouceDepartment("�ɶ��ӹ�˾������Դ��"));
	ChildCompany->add(new CSalesDepartment("�ɶ��ӹ�˾���۲�"));
	Company->add(ChildCompany);

	Company->show(1);
	system("pause");
	return 1;
}