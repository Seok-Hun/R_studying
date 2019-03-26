// 포인터 배열과 포인터의 포인터 사용하기
#include <stdio.h>

int main()
{
	char *ptrArray[2];
	char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u", &ptrArray[0]);        // ptrArray[0]의 주소값
	printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u", ptrArray[0]);            // ptrArray[0]에 있는 "Korea"가 저장된 주소값
	printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]의 참조 문자열 (*ptrArray[0]) = %s \n", *ptrArray);

	printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u", &ptrArray[1]);        // 포인터 변수가 비쥬얼 스튜디오에서는 4바이트를 할당 받으므로 ptrArray[0]과 주소값이 4 차이남
	printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s \n", *(ptrArray + 1));

	printf("\n ptrptr의 주소 (&ptrptr) = %u", &ptrptr);                       // ptrptr 자체의 주소값
	printf("\n ptrptr의 값 (ptrptr) = %u", ptrptr);                           // ptrptr은 ptrArray와 같은 값을 가짐. ptrArray는 ptrArray[0]의 주소값을 가짐
	printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u", *ptrptr);                 // *ptrptr은 ptrArray[0]의 값인 "Korea"의 주소값을 가짐
	printf("\n prtprt의 2차 참조값 (**ptrptr) = %c", **ptrptr);               // **ptrptr은 "Korea" 문자열을 가짐
	printf("\n ptrptr의 2차 참조 문자열 (**ptrptr) = %s \n", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[0] + i));
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*ptrptr + i));

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));
	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	printf("\n\n %d, %d", *ptrptr,*ptrptr+1);

	system("PAUSE");
}