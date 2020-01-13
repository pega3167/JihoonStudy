#include "ClassBasic.h"

void Student::SomeMethod()
{

}

Math::Math()
{
	someValue1 = 0;
	someValue2 = 'a';
	someValue3 = 0.0;
	somePointer = new int[100];
}	//»ý¼ºÀÚ

Math::~Math()
{
	delete[] somePointer;
}

void Math::SomeMethod()
{
	someValue1 = 4;
}

int Math::Add(int a, int b)
{
	return a + b;
};
