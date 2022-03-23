#include "Title.h"
#include "MyString.h"

Title::Title(void)
{
	title = NOT_SET;
}


Title::~Title(void)
{
}

void Title::setTitle(int title)
{
	switch(title)
	{
		case TITLE::DR:
			this->title = DR;
			break;
		case TITLE::MR:
			this->title = MR;
			break;
		case TITLE::MRS:
			this->title = MRS;
			break;
		case TITLE::MISS:
			this->title = MISS;
			break;
		case TITLE::MS:
			this->title = MS;
			break;
		default:
			this->title = NOT_SET;
			break;
	}
}

void Title::setTitle(TITLE t)
{
	title = t;
}

void Title::setTitle(char* str)
{
	/*Not implemented */
}

MyString* Title::getTitleAsString()
{
	MyString *returnTitle = new MyString();

	switch(title)
	{
		case TITLE::DR:
			returnTitle->setString("Dr");
			break;
		case TITLE::MR:
			returnTitle->setString("Mr");
			break;
		case TITLE::MRS:
			returnTitle->setString("Mrs");
			break;
		case TITLE::MISS:
			returnTitle->setString("Miss");
			break;
		case TITLE::MS:
			returnTitle->setString("Ms");
			break;
		default:
			returnTitle->setString("Not set!");
			break;
	}

	return returnTitle;
}