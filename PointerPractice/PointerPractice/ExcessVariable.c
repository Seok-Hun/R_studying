#include <stdio.h>

int main()
{
	int i = 10, j = 20;  // �޸� �ּҴ� ���α׷��� �����ų ������ �ٲ�
	int *ptr;            // ������ �������� �޸� �ּ� ���� ����, �Ϲ� ������ ���� �߻�

	printf("\n i�� �� = %d \n j�� �� = %d", i, j); // �Ϲ� ���� i�� j�� ��
	printf("\n i�� �޸� �ּ�(&i) = %u", &i);     // ���� i�� �޸� �ּ�
	printf("\n j�� �޸� �ּ�(&j) = %u", &j);     // ���� j�� �޸� �ּ�

	ptr = &i;
	printf("\n\n << ptr=&i ���� >>");
	printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr); // ��ȣ ���� ���� ��¿��� %u���, ������ �ּҸ� �˰� ���� ���� &(����) ���
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ������(*ptr) = %d", *ptr);      // ������ ������ �ּҰ� ����Ű�� ���� �ҷ����� ���� *(����)���

	ptr = &j;
	printf("\n\n << ptr=&j ���� >>");
	printf("\n ptr�� �޸� �ּ�(&ptr) = %u", &ptr);
	printf("\n ptr�� ��(ptr) = %u", ptr);
	printf("\n ptr�� ������(*ptr) = %d", *ptr);

	i = *ptr;                           // ���� ptr�� ����Ű�� �ּҴ� j�̹Ƿ� j�� ���� 20�� i�� ����
	printf("\n\n << i=*ptr ���� >>");
	printf("\n i�� �� = %d\n", i);  

	system("PAUSE");
}