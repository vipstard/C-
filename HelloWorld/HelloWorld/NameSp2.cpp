#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

// :: => ��������������(Scope Resoution Operator)��� �Ѵ�. �̸������� �����Ҷ� ����ϴ� ������ �̴�.
int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�"<<std::endl;
}

void ProgComImpl::SimpleFunc()
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}
