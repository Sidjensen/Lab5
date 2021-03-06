// Lab5Driver.cpp : Defines the entry point for the console application.
// Sidney Jensen
// With help from: Chase

#include "stdafx.h"
#include "Lab5MyStack.h"
#include <string>
#include <stack>
#include <iostream>
#include <vector>
#include <list>

using std::string;
using std::stack;
using std::vector;
using std::list;
using std::cin;
using std::cout;
using std::endl;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);

int main()
{
	string input;
	cout << "enter a string to reverse: " << endl;
	cin >> input;
	cout << "reversed string: " << stringReversal1(input) << endl; // shows result of reversing using a stack.

	cout << "enter another string to reverse: " << endl;
	cin >> input;
	cout << "reversed string: " << stringReversal2(input) << endl; // shows result of reversing using a vector.

	cout << "enter another string to reverse: " << endl;
	cin >> input;
	cout << "reversed string: " << stringReversal3(input) << endl; // shows result of reversing using a list.

	cout << "enter last string to reverse: " << endl;
	cin >> input;
	cout << "reversed string: " << stringReversal4(input) << endl; // shows result of reversing using MyStack.

	return 0;
}

string stringReversal1(string input)
{
	string newString;
	stack <char> stack1;

	for (int i = 0; i < input.length(); i++)
	{
		stack1.push(input.at(i));
	}
	while (!stack1.empty())
			{
				newString.push_back(stack1.top());
				stack1.pop();
			}
			return newString;
}

string stringReversal2(string input)
{
	string newString;
	vector <char> vector1;

	for (int i = 0; i < input.length(); i++)
	{
		vector1.push_back(input.at(i));
	}
	while (!vector1.empty())
	{
		newString.push_back(vector1.back());
		vector1.pop_back();
	}
	return newString;
}

string stringReversal3(string input)
{
	string newString;
	list <char> list1;

	for (int i = 0; i < input.length(); i++)
	{
		list1.push_back(input.at(i));
	}
	while (!list1.empty())
	{
		newString.push_back(list1.back());
		list1.pop_back();
	}
	return newString;
}

string stringReversal4(string input)
{
	string newString;
	MyStack temp;

	for (int i = 0; i < input.length(); i++)
	{
		temp.push(input.at(i));
	}
	while (!temp.isEmpty())
	{
		newString.push_back(temp.pull());
	}
	return newString;
}