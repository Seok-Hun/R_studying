#include <iostream>
using namespace std;

int main()
{
	int n[3] = { 10,20,30 };
	int v[3] = { 40,50,60 };
	//n = v; error. �迭 ������ �̸��� ������ ���. ��, ����� ����� ��ȣ�ۿ��� �� ����.
	//�Լ��� �з����ͷ� ������ ���� ���� ������ �ּ� ��ȭ ����

	char name[5] = "book"; //�ι��� �����ؼ� ����
	//�ι��ڴ� ������ ���� ��¡

	for (int i = 0; i < 3; ++i)
	{
		cout << "n[" << i << "]=" << n[i] << endl;
	}
	/*
	cout << "n[0]=" << n[0] << endl;
	cout << "n[1]=" << n[1] << endl;
	cout << "n[2]=" << n[2] << endl;
	*/
	return 0;
}