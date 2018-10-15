#pragma once
// Lab5MyStack.h
// Sidney Jensen

#include "stdafx.h"
#include <vector>
#include <list>

using std::vector;
using std::list;


#ifndef LAB5MYSTACK_H_
#define LAB5MYSTACK_H_

class MyStack
{
public:
	MyStack();
	~MyStack();

	bool isEmpty() const;
	void push(char& c);
	char pull();

private:
//	vector <char> stackItem; // uses vector to create a stackItem.
	list <char> stackItem; // uses list rather than vector.
};
#endif