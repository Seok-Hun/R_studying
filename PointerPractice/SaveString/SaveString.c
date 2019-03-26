// 포인터 배열을 이용해 문자열 저장하기
#include <stdio.h>

int main()
{
	int i;
	char *ptrArray[4] = { {"Korea"},{"Seoul"},{"Mapo"},{"152번지 2/3"} }; // 포인터 배열을 사용해 문자열을 저장하면 문자열의 길이에 따라 메모리 할당. 따라서 메모리를 효율적으로 사용
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);

	ptrArray[2] = "Jongno";
	printf("\n\n");
	for (i = 0; i < 4; i++)
		printf("\n %s", ptrArray[i]);

	system("PAUSE");
}