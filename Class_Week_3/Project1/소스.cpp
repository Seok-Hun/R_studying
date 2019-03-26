#include <iostream>
using namespace std;

int main()
{
	int n[3] = { 10,20,30 };
	int v[3] = { 40,50,60 };
	//n = v; error. 배열 변수의 이름은 포인터 상수. 즉, 상수와 상수는 상호작용할 수 없다.
	//함수의 패러미터로 변수가 쓰일 때는 포인터 주소 변화 가능

	char name[5] = "book"; //널문자 포함해서 생각
	//널문자는 문장의 끝을 상징

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