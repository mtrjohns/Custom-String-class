#pragma once
class MyString
{
private:
	char* str;
public:
	MyString(void);
	MyString(char*);
	MyString(MyString*);

	virtual ~MyString(void);

	void setString(char*);
	char* getCString(void);

	void print();
};

