#pragma once

class MyString;

class Title
{
public:
	typedef enum TITLE{NOT_SET=0, MR, MRS, DR, MS, MISS};

private:
	TITLE title;
public:
	Title(void);

	virtual ~Title(void);

	void setTitle(int);
	void setTitle(TITLE);
	void setTitle(char*);
	MyString* getTitleAsString();




};

