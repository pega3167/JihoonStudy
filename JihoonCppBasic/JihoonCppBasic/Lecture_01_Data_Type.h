#pragma once

class Lecture01
{	
	void DataTypes()
	{
		// 자료형(Data type)
		// 모든 자료형은 숫자다.
		// 자료형의 차이는 아래의 두가지를 결정해주는 것이다.
		// 1. 메모리 공간을 얼마나 차지할 것인가? -> 1~8 BYTE
		// 2. 차지한 메모리 공간을 어떻게 읽을 것인가? -> 정수/양수/소수 등...

		//정수형 자료형
		{
			char c;					// 1Byte 정수 (-128~127) signed char라고도 함 signed는 생략 가능
			unsigned char uc;		// 1Byte 양수 (0~255)

			short s;				// 2Byte 정수 (-32768 ~ 32767)
			unsigned short us;		// 2Byte 양수 (0~65535)

			long l;					// 4Byte 정수 (-2^31 ~ 2^31-1)
			unsigned long ul;		// 4Byte 양수 (0~ 2^32 - 1)

			long long ll;			// 8Byte 정수 (-2^63 ~ 2^63-1)
			unsigned long long ull;	// 8Byte 양수 (0 ~ 2^64)

			int i;				// 4 or 8 Byte 정수		-> Windows에서는 4로 고정
			unsigned int ui;	// 4 or 8 Byte 양수		-> Windows에서는 4로 고정

			// ****************포인터 자료형***************** -> 존냐 중요
			// 크기는 컴파일러 + 운영체제마다 다름. 보통 컴파일러에서 옵션을 선택하여 실행하면 그때 정해진다.
			// (자료형)* 변수명 -> ex) int* p;
			// 4 or 8 Byte 양수. 자료형 자리에 무엇이 들어가든 다 똑같이 4~8Byte 양수값을 가짐
			char* pc;	// 4 or 8 Byte 양수
			short* ps;	// 4 or 8 Byte 양수
			int* pi;	// 4 or 8 Byte 양수			
		}

		// 소수형 자료형
		{
			float f;		// 4 Byte 소수
			double d;		// 8 Byte 소수
		}
	}
};