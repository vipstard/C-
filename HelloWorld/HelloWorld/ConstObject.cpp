#include <iostream>
using  namespace std;

class  SoSimple
{
private:
	int num;


public:
	SoSimple(int n) : num(n){}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	
	void ShowData() const 
	{
		cout << "num: " << num << endl;
	}
};

// ��ü�� const������ �ٰԵǸ� const ����Լ��� ȣ���� �����ϴ�. = > ��ü�� �����ͺ����� ������� ������!
int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20); const�� ���� �ʱ⶧���� ȣ�� �Ұ���
	obj.ShowData(); // const�� �ٱ⶧���� ȣ�Ⱑ��
	return 0;
}
