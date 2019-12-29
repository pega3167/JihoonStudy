#include <iostream>

#define IS_BOY(a)		(a & 0x80000000)
#define IS_NULL(value)	value == NULL
#define NAME_COUNT_MAX	32

typedef int* POINTER_READ_32BIT;

int main()
{
	/**************포인터**************/
	//배열
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
		//여기 실행됨ㅋㅋ쥰내어렵짘ㅋㅋㅄ
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

	// Pointer 와 string5
	// string 은 '\0'로 끝나는 char형 배열
	
	char pName[500];
	char* pHeadOfname = pName;
	pHeadOfname[3] = 'a';
	*(pHeadOfname + 3) = 'a';

	int* pNumberPointer = new int;
	delete pNumberPointer;


	char* KimjihunDaegariBBangu = new char[100];
	delete[] KimjihunDaegariBBangu;

	/**************연산자*************/
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
	nResult = nA % nB;	//나머지 Modular	
	nA++;
	nA--;
	
	bool bValue = false;
	bValue = nA * nB * 0; // 계산결과 0. 0은 false로 침

	//조건연산자
	{
		bool bResult = false;
		bool bA = true;
		bool bB = false;

		bResult = nA > nB;	// 왼쪽이 크냐
		bResult = nA < nB;	// 오른쪽이 크냐
		bResult = nA == nB;	// 같냐
		bResult = nA != nB;	// 다르냐
		bResult = bA || bB;	// 하나라도 true냐 
		bResult = bA && bB;	// 둘다 true 냐
		bResult = !bA;		// true <-> false 뒤집개
	}

	{
		// 조건 연산자 example
		bool bA = false;
		bool bB = true;

		bool bResult = bA || bB;	// true가 저장됨
		bResult = bA && bB;			// false가 저장됨

		bResult = !bResult;			// bResult에 저장된 값 뒤집기
	}
	
	bool bALargerThan3OrBLargerThan4 = !(nA > 3 || nB > 4);
	
	//비트연산자
	//	shift:		<<
	//				>>
	//	bit and		&
	//	bit or		|
	
	if (true)
	{
		// 여기를 실행
	}
	else
	{
		// 여기는 안실행
	}

	if (false)
	{
		// 여기는 안실행ㅋ
	}
	else
	{
		//여기 실행
	}

	// if문 example
	{
		int a = 3;
		int b = 5;

		if (a > b)
		{
			// -> 실행 되지 않는다. 
			a++;
		}
		//a 는 그대로 3이다.
	}

	//3항 연산자 ? :
	{
		int a = 0;
		int b = 0;
		int c = a > b ? a : b;
	}

	// while 문
	{
		while (/*조건*/ false )
		{
			// 조건이 true 라면 이 코드를 실행한다.
			continue;	//뒤의 코드를 진행하지 않고 다시 반복한다.
			break;		//뒤의 코드를 진행하지 않고 while문을 탈출한다.

			//탈출하지 않고 여기까지 오면 다시 조건을 확인한다.
		}
	}

	// for 문
	{
		int nIndex = 0;
		while (/*조건*/false)
		{
			/*하고싶은일*/
			nIndex++;
		}

		for (/*반복문 돌고 치우고 싶은 변수 선언*/; /*반복문 탈출 조건*/false; /*반복문마다 마지막에 하고싶은 연산*/)
		{
			/*하고싶은일*/
		}
	}

	// 반복문 예제
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
		//... 줜나 끝이 없음 -> 이때 반복문 사용

		int nIndex = 0;
		while (nIndex <= 99)
		{
			some_char_array[nIndex] = '\0';
			nIndex++;
		}

		delete[] some_char_array;
	}

	// 예제 2
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