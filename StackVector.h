#pragma once
#include <iostream>
#include <vector>
using namespace std;

template <class T>
class StackVector
{

	vector<T> Internal;

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