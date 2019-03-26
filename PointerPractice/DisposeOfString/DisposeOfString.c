#include <stdio.h>

int main()
{
	int i;
	char string1[20] = "Dreams come true!", string2[20], *ptr1, *ptr2;

	ptr1 = string1;                 // 배열 변수의 이름은 배열의 첫번째 값의 주소값이므로 포인터 변수로 지정 가능
	printf("\n string1의 주소 = %u \t ptr1 = %u", string1, ptr1); // 배열 변수의 이름이 배열의 첫번째 값의 주소값이므로 &(변수)형태일 필요가 없다.
	printf("\n string1 = %s \n ptr1 = %s", string1, ptr1);        // %s는 문자열을 출력할 때 사용. 
	printf("\n\n %s", ptr1 + 7);                                  // ptr1+7은 &string1[7]과 같은 의미.
	ptr2 = &string1[7];
	printf("\n %s \n\n", ptr2);

	for (i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));     // putchar()는 한글자씩 출력하는 함수. ptr1에 저장된 문자열을 거꾸로 출력.
	}
	for (i = 0; i < 20; i++)
	{
		string2[i] = *(ptr1 + i); // string2도 ptr1을 이용해 string1과 같은 문자열을 가지게 됨 
	}
	printf("\n\n string1 = %s", string1);
	printf("\n string2 = %s", string2);

	*ptr1 = 'P';                  // ptr1과 string1이 같은 주소값을 가지고 있기 때문에 *ptr1을 변경하면 string1도 바뀜
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	printf("\n\n string1 = %s\n", string1);

	getchar();
}