#include <iostream>
#include "Color.h"

using namespace std;

int main(void)
{
	// -------------------------
	// Color Ŭ���� �⺻ ��� ���

	// Ƽ��Ʈ ������
	Color c1;
	c1.Print();

	// ���ڰ� �ִ� ������
	Color c2(100, 100, 100);
	c2.Print();

	// c2�� R��� ����
	c2.SetR(255);
	c2.Print();

	// c2�� R��� Ȯ��
	cout << "c2.R = " << (int)c2.GetR() << "\n";

	// c2�� ��ü ��⸦ 50 ����
	c2.AdjustBright(50);
	c2.Print();

	// ---------------
	// ���� ����� ���

	// ������ ��ü�� �� Ȯ��
	Color::Black.Print();

	// ��ü�� ���������� �ʱ�ȭ
	Color c3 = Color::Black;

	return 0;
}