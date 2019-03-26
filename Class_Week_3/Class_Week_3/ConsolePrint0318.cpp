#include <iostream> //iostream = input output stream
using namespace std; //이후부터 std 생략 가능

int main()
{
	char ch = 'A'; //ch = 'A'에서 =는 assign으로 부름
	int a = 7;
	//bool val = true;
	bool val = false;
	cout << "val=" << val << endl;
	cout << "ch" << ch << endl;
	cout << "(int)ch=" << (int)ch << endl;
	cout << "a=" << a << endl;
	cout << "ch=" << ch << ",a=" << a << endl;
	cout << "Hello World!\n"; //cout이 std라는 namespace 소속이라는 의미
	// std = standard라는 namespace의 이름, namespace는 소속을 밝히는 역할, :: = scope operator, std는 iostream 소속
	cout << "Gachon" << endl; // << = 출력 연산자, endl = \n, endl은 std소속
	return 0;
}