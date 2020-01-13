#include "stdio.h"
#include "windows.h"

int main()
{
	int a = 3, b = 10;
	//1. a 의 값을 5로 바꿔라
	a = 5;
	printf("문제1\n 답: a는 %d\n", a);

	//2. Pratice의 3번째 값을 5로 바꿔라 그리고 print하셈
	int PraticeArray[10] = { 0, };



	printf("\n문제2\n 답: \n"); // 여기도 수정할 것
	//3. Pratice안에 값을 전부 print 해라 0~9 for 또는 while 쓸것
	printf("\n문제3\n+++++++++++여기부터++++++++++");

	   	  

	printf("\n+++++++++++여기까쥐++++++++++\n");


	//4. a와 b의 값을 바꿔라
	a = 100;
	b = 101;

	// 너의 코드



	// 너의 코드 끗
	printf("\n문제4\na가 101이 되었니??: %d\nb는 100이 되었니??: %d\n", a, b);

	//5. a와 b의 값을 다시  바꾸는데, 코드 말고 함수로 하셈
	//함수 만들고 여기다가는 한줄만 쓰셈 함수 이름은Swap으로 해주셈 취존좀

	printf("\n문제5\na가 다시 100이 되었니??: %d\nb는 다시 101이 되었니??: %d\n", a, b);
	system("pause");
}