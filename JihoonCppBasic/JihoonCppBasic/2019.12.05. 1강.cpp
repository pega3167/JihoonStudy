#include <iostream>
#include "Function.h"

#define IS_BOY(a)		(a & 0x80000000)
#define NULL '\0'
#define IS_NULL(value)	value == NULL
#define NAME_COUNT_MAX	32

int main()
{
	/**************������**************/
	//�迭
	int nArrayA[30] = { 0, };
	int nArrayB[4] = { 1, 2, 3, 4 };
	int nArrayC[4] = { 1, 2, };

	nArrayB[3] = 999;
	*(nArrayB + 3) = 999;

	// Pointer �� string
	// string �� '\0'�� ������ char�� �迭
	
	char pName[500];
	char* pHeadOfname = pName;
	pHeadOfname[3] = 'a';
	*(pHeadOfname + 3) = 'a';

	int* pNumberPointer = new int;
	delete pNumberPointer;


	char* KimjihunDaegariBBangu = new char[100];
	delete[] KimjihunDaegariBBangu;

	/**************������*************/
	//arithmatic
	double d1 = 1.0;
	double d2 = 1.1;

	float f1 = 3.3f;
	float f2 = 2.2f;

	float f3 = f1 / f2;
	

	int a = 3;
	int b = 4;

	int c = 3;

	Multiple10(&c);

	void(*pFnMultiple10)(int*);
	pFnMultiple10 = &Multiple10;

	pFnMultiple10(&c);

	c = a - b;

	c = a * b;
	c = a / b;
	c = a % b;	//������ Modular	
	a++;
	a--;
	
	bool bValue = false;
	bValue = a * b * 0;
	
	//���ǿ�����
	a > b;					// ������ ũ��
	b < a;					// �������� ũ��
	a == b;					//����
	a != b;					//�ٸ���
	false || false;			//or
	true && true;			//and
	!a;						//true -> false / false -> true ~���ƴϸ�

	
	bool bALargerThan3OrBLargerThan4 = !(a > 3 || b > 4);
	
	//��Ʈ������
	//	shift:		<<
	//				>>
	//	bit and		&
	//	bit or		|
	
	if (true)
	{
		// ���⸦ ����
	}
	else
	{
		// ����� �Ƚ���
	}

	if (false)
	{
		// ����� �Ƚ��ऻ
	}
	else
	{
		//���� ����
	}

	int a = 0;
	int b = 0;

	//3�� ������ ? : 
	int c = a > b ? a : b;

	if (a > b)
	{
		
	}

	// while ��
	while (true)
	{
		if(a > b)
			continue;


		break;
	}

	int nSize = 0;
	char* some_char_array = new char[100];
	some_char_array[0] = 'a';
	some_char_array[1] = 'b';

	some_char_array[0] = '\0';
	some_char_array[1] = '\0';
	some_char_array[2] = '\0';
	some_char_array[3] = '\0';
	some_char_array[4] = '\0';
	some_char_array[5] = '\0';
	some_char_array[6] = '\0';
	some_char_array[7] = '\0';
	some_char_array[8] = '\0';
	some_char_array[9] = '\0';
	some_char_array[10] = '\0';
	
	int nIndex = 0;	
	while (nIndex <= 99)
	{
		some_char_array[nIndex] = '\0';
		nIndex++;
	}

	char* pString;
	int nSize = 0;
	int nIndex = 0;

	while (pString[nIndex] != '\0')
	{
		nIndex++;
	}
	nSize = nIndex;

	while (*(pString + nIndex) != '\0')
	{
		nIndex++;
	}	
	nSize = nIndex;
}