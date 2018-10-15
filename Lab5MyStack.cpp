// Lab5MyStack.cpp
// Sidney Jensen
#include "stdafx.h"
#include "Lab5MyStack.h"


MyStack::MyStack()
{

}

MyStack::~MyStack()
{

}

bool MyStack::isEmpty() const
{
	if (stackItem.empty())
	{
		return true;
	}
	return false;
}

void MyStack::push(char& c)
{
	stackItem.push_back(c);
}

char MyStack::pull()
{
	char temp;
	temp = stackItem.back();
	stackItem.pop_back();
	return temp;
}