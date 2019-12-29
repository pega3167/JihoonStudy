#pragma once

class Lecture01
{	
	void DataTypes()
	{
		// �ڷ���(Data type)
		// ��� �ڷ����� ���ڴ�.
		// �ڷ����� ���̴� �Ʒ��� �ΰ����� �������ִ� ���̴�.
		// 1. �޸� ������ �󸶳� ������ ���ΰ�? -> 1~8 BYTE
		// 2. ������ �޸� ������ ��� ���� ���ΰ�? -> ����/���/�Ҽ� ��...

		//������ �ڷ���
		{
			char c;					// 1Byte ���� (-128~127) signed char��� �� signed�� ���� ����
			unsigned char uc;		// 1Byte ��� (0~255)

			short s;				// 2Byte ���� (-32768 ~ 32767)
			unsigned short us;		// 2Byte ��� (0~65535)

			long l;					// 4Byte ���� (-2^31 ~ 2^31-1)
			unsigned long ul;		// 4Byte ��� (0~ 2^32 - 1)

			long long ll;			// 8Byte ���� (-2^63 ~ 2^63-1)
			unsigned long long ull;	// 8Byte ��� (0 ~ 2^64)

			int i;				// 4 or 8 Byte ����		-> Windows������ 4�� ����
			unsigned int ui;	// 4 or 8 Byte ���		-> Windows������ 4�� ����

			// ****************������ �ڷ���***************** -> ���� �߿�
			// ũ��� �����Ϸ� + �ü������ �ٸ�. ���� �����Ϸ����� �ɼ��� �����Ͽ� �����ϸ� �׶� ��������.
			// (�ڷ���)* ������ -> ex) int* p;
			// 4 or 8 Byte ���. �ڷ��� �ڸ��� ������ ���� �� �Ȱ��� 4~8Byte ������� ����
			char* pc;	// 4 or 8 Byte ���
			short* ps;	// 4 or 8 Byte ���
			int* pi;	// 4 or 8 Byte ���			
		}

		// �Ҽ��� �ڷ���
		{
			float f;		// 4 Byte �Ҽ�
			double d;		// 8 Byte �Ҽ�
		}
	}
};