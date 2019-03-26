#include <stdio.h>

int main()
{
	int i = 10, j = 20;  // 메모리 주소는 프로그램을 실행시킬 때마다 바뀜
	int *ptr;            // 포인터 변수에만 메모리 주소 저장 가능, 일반 변수는 에러 발생

	printf("\n i의 값 = %d \n j의 값 = %d", i, j); // 일반 변수 i와 j의 값
	printf("\n i의 메모리 주소(&i) = %u", &i);     // 변수 i의 메모리 주소
	printf("\n j의 메모리 주소(&j) = %u", &j);     // 변수 j의 메모리 주소

	ptr = &i;
	printf("\n\n << ptr=&i 실행 >>");
	printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr); // 부호 없는 정수 출력에는 %u사용, 변수의 주소를 알고 싶을 때는 &(변수) 사용
	printf("\n ptr의 값(ptr) = %u", ptr);
	printf("\n ptr의 참조값(*ptr) = %d", *ptr);      // 포인터 변수의 주소가 가리키는 값을 불러들일 때는 *(변수)사용

	ptr = &j;
	printf("\n\n << ptr=&j 실행 >>");
	printf("\n ptr의 메모리 주소(&ptr) = %u", &ptr);
	printf("\n ptr의 값(ptr) = %u", ptr);
	printf("\n ptr의 참조값(*ptr) = %d", *ptr);

	i = *ptr;                           // 현재 ptr이 가리키는 주소는 j이므로 j의 값인 20이 i에 저장
	printf("\n\n << i=*ptr 실행 >>");
	printf("\n i의 값 = %d\n", i);  

	system("PAUSE");
}