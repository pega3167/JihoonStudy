#pragma once

class ClassBasic
{
public:
	int someValue1;
	char someValue2;
	double someValue3;
	int someArray[10];

	void* somePointer;

	void(*someFunctionPointer)();

	ClassBasic() {};
	~ClassBasic() {};

	void SomeMethod() {};
	static void SomeMethod2() {};
};

