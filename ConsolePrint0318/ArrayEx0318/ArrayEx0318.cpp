// ArrayEx0318.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace  std;

int main()
{
	const char *p = "apple"; //const char* 상수화된 문자열의 주소,
	cout << "p=" << p << endl; //cout 함수가 호출되면 cout.operator<<(p);가 실행되는데 이 때 p에 저장된 문자열을 모두 표시
	//p는 "apple"이 저장된 주소, *p는 p의 주소에 있는 데이터
	printf("p=%p\n", p);
	printf("p=%s\n", p);

//	*p = 'A'; error
	int  n[3] = { 10,20,30 };
	int  v[3] = { 40,50, 60 };

	char  name[5] = "book" ; // null문자 확보를 위해 문자 수보다 1 더 크게 배열 크기 선언
	// "book" 자체 = 문자열 상수 데이터(수정 불가), name 변수에 있는 "book" = 문자열 변수 데이터(수정 가능)
	// 문자열은 문자열 상수 데이터, 문자열 변수 데이터로 구분
	cout << "name=" << name << endl;

	name[0] = 'B'; // name 배열의 0번째 값을 B로 수정
	cout << "수정한 name=" << name << endl;
	printf("name이 저장한 값 = %p\n", name); // %p는 변수의 주소값 반환(name 변수의 시작 주소값)

	char copy[5] = "desk";
	strcpy_s(name, strlen(copy) +1, copy); // strlen():문자열의 문자 개수, strcat():문자들을 하나의 문자로 합침
	cout << "복사후name=" << name << endl;
//	name = copy; error
//	name[0] = copy[0];
//	char *p = "book";

	// n = v; //error..
	// 배열명은 배열의 포인터(주소)상수이기때문에
	for (int i = 0; i <= 2; ++i)
	{
		cout << "n[" << i << "]=" 
			<< n[i]	<< endl;
	}
	/*
	cout << "n[0]=" << n[0] << endl;
	cout << "n[1]=" << n[1] << endl;
	cout << "n[2]=" << n[2] << endl;
	*/

	return  0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사 용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
