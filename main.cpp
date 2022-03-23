
#include "MyString.h"
#include "Title.h"
#include <stdio.h>

int main(int argc, char** argv)
{
	MyString* s = new MyString("hello\n");
	s->print();

	s->setString("goodbye\n");
	s->print();

	char* bad = s->getCString();

	MyString *s2 = new MyString(s);

	delete s;

	s2->print();

	delete s2;

	Title* t = new Title();
	t->setTitle(1);

	MyString *ts;
	ts = t->getTitleAsString();
	ts->print();
	delete ts;

	Title* t2 = new Title();
	t2->setTitle(Title::MRS);
	ts = t2->getTitleAsString();
	ts->print();
	delete ts;
}