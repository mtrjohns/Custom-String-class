#include "MyString.h"
#include <string.h>
#include <stdio.h>

MyString::MyString(void)
{
	str = nullptr;
}

MyString::MyString(char* str)
{
	this->str = nullptr;
	setString(str);
}
	
MyString::MyString(MyString* oldString)
{
	str = nullptr;
	setString(oldString->str);
}

MyString::~MyString(void)
{
	if(str != nullptr)
		delete str;
}

void MyString::setString(char* str)
{
	if(this->str != nullptr)
	{
		delete this->str;
	}

	this->str = new char[strlen(str)+1];
	strcpy(this->str,str);
}

char* MyString::getCString(void)
{
	return this->str;
}

void MyString::print()
{
	printf("%s",str);
}