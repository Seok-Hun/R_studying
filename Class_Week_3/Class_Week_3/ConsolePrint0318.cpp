#include <iostream> //iostream = input output stream
using namespace std; //���ĺ��� std ���� ����

int main()
{
	char ch = 'A'; //ch = 'A'���� =�� assign���� �θ�
	int a = 7;
	//bool val = true;
	bool val = false;
	cout << "val=" << val << endl;
	cout << "ch" << ch << endl;
	cout << "(int)ch=" << (int)ch << endl;
	cout << "a=" << a << endl;
	cout << "ch=" << ch << ",a=" << a << endl;
	cout << "Hello World!\n"; //cout�� std��� namespace �Ҽ��̶�� �ǹ�
	// std = standard��� namespace�� �̸�, namespace�� �Ҽ��� ������ ����, :: = scope operator, std�� iostream �Ҽ�
	cout << "Gachon" << endl; // << = ��� ������, endl = \n, endl�� std�Ҽ�
	return 0;
}