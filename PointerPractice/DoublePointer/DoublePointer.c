// ������ �迭�� �������� ������ ����ϱ�
#include <stdio.h>

int main()
{
	char *ptrArray[2];
	char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;
	printf("\n ptrArray[0]�� �ּ� (&ptrArray[0]) = %u", &ptrArray[0]);        // ptrArray[0]�� �ּҰ�
	printf("\n ptrArray[0]�� �� (ptrArray[0]) = %u", ptrArray[0]);            // ptrArray[0]�� �ִ� "Korea"�� ����� �ּҰ�
	printf("\n ptrArray[0]�� ������ (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]�� ���� ���ڿ� (*ptrArray[0]) = %s \n", *ptrArray);

	printf("\n ptrArray[1]�� �ּ� (&ptrArray[1]) = %u", &ptrArray[1]);        // ������ ������ ����� ��Ʃ��������� 4����Ʈ�� �Ҵ� �����Ƿ� ptrArray[0]�� �ּҰ��� 4 ���̳�
	printf("\n ptrArray[1]�� �� (ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]�� ������ (*ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]�� ���� ���ڿ� (*ptrArray[1]) = %s \n", *(ptrArray + 1));

	printf("\n ptrptr�� �ּ� (&ptrptr) = %u", &ptrptr);                       // ptrptr ��ü�� �ּҰ�
	printf("\n ptrptr�� �� (ptrptr) = %u", ptrptr);                           // ptrptr�� ptrArray�� ���� ���� ����. ptrArray�� ptrArray[0]�� �ּҰ��� ����
	printf("\n ptrptr�� 1�� ������ (*ptrptr) = %u", *ptrptr);                 // *ptrptr�� ptrArray[0]�� ���� "Korea"�� �ּҰ��� ����
	printf("\n prtprt�� 2�� ������ (**ptrptr) = %c", **ptrptr);               // **ptrptr�� "Korea" ���ڿ��� ����
	printf("\n ptrptr�� 2�� ���� ���ڿ� (**ptrptr) = %s \n", *ptrptr);

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