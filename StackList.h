#pragma once
#include <iostream>
#include <list>
using namespace std;

template <class T>
class StackList
{

	list<T> Internal;

public:

	void Push(T data)
	{
		Internal.push_back(data);
	}

	T Pop()
	{
		T data = Internal.back();
		Internal.pop_back();
		return data;
	}

	bool IsEmpty()
	{
		return Internal.size() == 0;
	}

	int Size()
	{
		return Internal.size();
	}

	T Top()
	{
		return Internal.back();
	}
	

};