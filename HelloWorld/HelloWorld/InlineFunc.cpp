#include <iostream>

inline int SQUARE(int x)
{
	return x * x;
}

// ��ũ�θ� �̿��� �Լ��� �ζ���ȭ�� ��ó���⿡ ���� ó��,
// Ű���� inline�� �̿��� �Լ��� �ζ���ȭ�� �����Ϸ��� ���� ó���� �ȴ�. ���� �����Ϸ���
// �Լ��� �ζ���ȭ�� ������ ���ɿ� �ذ��ȴٰ� �Ǵ��Ұ�� Ű���带 ������
int main(void)
{
	std::cout << SQUARE(5)<<std::endl;
	std::cout << SQUARE(12)<<std::endl;
	return 0;
}