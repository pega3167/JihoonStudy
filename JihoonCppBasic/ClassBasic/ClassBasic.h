#pragma once
class AnotherClass
{
public:
	int nSomething;

	AnotherClass() { nSomething = 0; }
};

class Math
{
public:
	int someValue1;
	char someValue2;
	double someValue3;
	int someArray[10];
	void* somePointer;
	void(*someFunctionPointer)();
	AnotherClass hi;

	Math();
	~Math();
	void SomeMethod();

	static int Add(int a, int b);	
};

class StudentID
{
	int nID[8];
};

class StudentName
{
	char strName[100];
};

class Student
{
public:
	StudentID ID;
	StudentName Name;

	void SomeMethod();
};