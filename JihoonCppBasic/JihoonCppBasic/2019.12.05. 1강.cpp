#include <iostream>

#define IS_BOY(a)		(a & 0x80000000)
#define IS_NULL(value)	value == NULL
#define NAME_COUNT_MAX	32

typedef int* POINTER_READ_32BIT;

int main()
{
	/**************������**************/
	//�迭
	int nArrayA[30] = { 0, };
	int nArrayB[4] = { 1, 2, 3, 4 };
	int nArrayC[4] = { 1, 2, };

	nArrayB[3] = 999;
	*(nArrayB + 3) = 999;

	
	int a = 13;
	int* p = &a;
	int** pp = &p;

	if (*p == 13)
	{
		//���� ����ʤ����볻��ƣ�������
	}

	int** pDouble = NULL;

	pDouble = new int*[10];

	int nIndex = 0;
	while (nIndex < 10)
	{
		pDouble[nIndex] = new int[10];
		nIndex++;
	}

	int n = 0;
	long l = 0;

	char c = 0;
	short s = 0;
	long long ll = 0;
	
	// Casting
	POINTER_READ_32BIT pointer_ = 0;
	int nIntPointerToInt = (int)pointer_;

	char nIntToChar = (char)a;
	int nShortToInt = (int)s;

	// Pointer �� string5
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
	

	int nA = 3;
	int nB = 4;

	int nResult = 3;
	
	nResult = nA + nB;
	nResult = nA - nB;
	nResult = nA * nB;
	nResult = nA / nB;
	nResult = nA % nB;	//������ Modular	
	nA++;
	nA--;
	
	bool bValue = false;
	bValue = nA * nB * 0; // ����� 0. 0�� false�� ħ

	//���ǿ�����
	{
		bool bResult = false;
		bool bA = true;
		bool bB = false;

		bResult = nA > nB;	// ������ ũ��
		bResult = nA < nB;	// �������� ũ��
		bResult = nA == nB;	// ����
		bResult = nA != nB;	// �ٸ���
		bResult = bA || bB;	// �ϳ��� true�� 
		bResult = bA && bB;	// �Ѵ� true ��
		bResult = !bA;		// true <-> false ������
	}

	{
		// ���� ������ example
		bool bA = false;
		bool bB = true;

		bool bResult = bA || bB;	// true�� �����
		bResult = bA && bB;			// false�� �����

		bResult = !bResult;			// bResult�� ����� �� ������
	}
	
	bool bALargerThan3OrBLargerThan4 = !(nA > 3 || nB > 4);
	
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

	// if�� example
	{
		int a = 3;
		int b = 5;

		if (a > b)
		{
			// -> ���� ���� �ʴ´�. 
			a++;
		}
		//a �� �״�� 3�̴�.
	}

	//3�� ������ ? :
	{
		int a = 0;
		int b = 0;
		int c = a > b ? a : b;
	}

	// while ��
	{
		while (/*����*/ false )
		{
			// ������ true ��� �� �ڵ带 �����Ѵ�.
			continue;	//���� �ڵ带 �������� �ʰ� �ٽ� �ݺ��Ѵ�.
			break;		//���� �ڵ带 �������� �ʰ� while���� Ż���Ѵ�.

			//Ż������ �ʰ� ������� ���� �ٽ� ������ Ȯ���Ѵ�.
		}
	}

	// for ��
	{
		int nIndex = 0;
		while (/*����*/false)
		{
			/*�ϰ������*/
			nIndex++;
		}

		for (/*�ݺ��� ���� ġ��� ���� ���� ����*/; /*�ݺ��� Ż�� ����*/false; /*�ݺ������� �������� �ϰ���� ����*/)
		{
			/*�ϰ������*/
		}
	}

	// �ݺ��� ����
	{
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
		//... �K�� ���� ���� -> �̶� �ݺ��� ���

		int nIndex = 0;
		while (nIndex <= 99)
		{
			some_char_array[nIndex] = '\0';
			nIndex++;
		}

		delete[] some_char_array;
	}

	// ���� 2
	{
		const char* pString = "hi";
		int nSize = 0;
		nIndex = 0;

		while (pString[nIndex] != '\0')
		{
			nIndex++;
		}
		nSize = nIndex;
	}

}