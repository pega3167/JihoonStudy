#pragma once

#pragma once

class Lecture03
{
	void Array()
	{
		// �迭 (�ڷ���) (������)([����])
		// ex int arr[300];

		// �ѹ��� �������� �����͸� stack�� �Ҵ�ް� ���� �� ����Ѵ�.
		// stack ������ "���ʴ��" ����Ǿ �Ҵ�ȴ�.
		// (�߿�)	���� �ÿ� �Ҵ��� �ּ� ������ ���� �� �ּҸ� �������� �����Ѵ�.
		//			�� �������� �����ʹ�.
		{
			int arr1[5];
			int arr2[5] = { 0, 1, 2, 3, 4 };
			int arr3[5] = { 0, }; //�� 0���� ä������
			// ���⼭ arr1 arr2 arr3�� ��� int*��
		}

		// ���ʴ�� ����Ǿ� �ֱ� ������ ���� �� �ּҸ� �˾Ƶ� ��� ������ ���� �����ϴ�. 
		// ex) 300��° �����ʹ� ù �ּҷκ��� (�ڷ��� ũ�� x 300)��ŭ ������ ������ ����Ǿ� �ִ�.

		// ù �ּҷκ��� n���� �ڷ�����ŭ ������ �����͸� �д� �����ڰ� [n]�̴�. (����ÿ� ���� []�� �ٸ�)
		{
			int arr[3];		// stack ������ ���ӵ� int 3���� ����
							// arr��� int* ���� 1���� ����
							// arr�ȿ��� �ڵ����� ���� int 3���� �� �� �ּҰ��� �����

			arr[0] = 2;		// arr�ȿ� ����� �ּҰ����� int x 0��ŭ ������ ������ 2�� �����ض�.

			
			//arr�� ��� �������̱� ������, [n]�� ��� ������ �����̳� �ٸ�����.
			int* p = arr;
			p[0] = 2;		// p�ȿ� ����� �ּҰ����� int x 0��ŭ ������ ������ 2�� �����ض�
		}
	}
};