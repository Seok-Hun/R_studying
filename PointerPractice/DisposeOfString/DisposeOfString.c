#include <stdio.h>

int main()
{
	int i;
	char string1[20] = "Dreams come true!", string2[20], *ptr1, *ptr2;

	ptr1 = string1;                 // �迭 ������ �̸��� �迭�� ù��° ���� �ּҰ��̹Ƿ� ������ ������ ���� ����
	printf("\n string1�� �ּ� = %u \t ptr1 = %u", string1, ptr1); // �迭 ������ �̸��� �迭�� ù��° ���� �ּҰ��̹Ƿ� &(����)������ �ʿ䰡 ����.
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);        // %s�� ���ڿ��� ����� �� ���. 
	printf("\n\n %s", ptr1 + 7);                                  // ptr1+7�� &string1[7]�� ���� �ǹ�.
	ptr2 = &string1[7];
	printf("\n %s \n\n", ptr2);

	for (i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));     // putchar()�� �ѱ��ھ� ����ϴ� �Լ�. ptr1�� ����� ���ڿ��� �Ųٷ� ���.
	}
	for (i = 0; i < 20; i++)
	{
		string2[i] = *(ptr1 + i); // string2�� ptr1�� �̿��� string1�� ���� ���ڿ��� ������ �� 
	}
	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';                  // ptr1�� string1�� ���� �ּҰ��� ������ �ֱ� ������ *ptr1�� �����ϸ� string1�� �ٲ�
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1);

	getchar();
}