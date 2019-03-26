// Standardinput0325.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	char blood = '\0';
	char addr[80] = { '\0', };

	cout << "혈액형 입력:";
	blood = cin.get();
//	cin >> blood;
	cout << "blood=" << blood << endl;

	char name[10] = { '\0', }; // name 배열을 null(\0)문자로 채움
	cout << "학번 입력: ";
	cin >> num;
	cout << "학번: " << num << endl;
//	getchar(); c언어 방식
	cout << "이름입력:";
	cin.getline(name, sizeof(name)+1,'\n'); //띄어쓰기 가능, 첫번째 파라미터는 저장 변수, 두번째 파라미터는 최대 입력 크기
//	gets_s(name, sizeof(name)); c언어 방식(띄어쓰기 가능)
//	cin >> name;
	cout << "name=" << name << endl;
	return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
