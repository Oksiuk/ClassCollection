#include "ClassCollection.h"

#include<iostream>
using namespace std;

Collection::Collection()
{

}

Collection::Collection(const int item, const int count)
{
	ar = new int[count];
	for (int i = 0; i < count; ++i)
	{
		ar[i] = item;
	}
	length = count;
}

Collection::Collection(const Collection& obj)
{
	ar = new int[obj.length];
	this->length = obj.length;
	for (int i = 0; i < length; ++i)
	{
		ar[i] = obj.ar[i];
	}
}

Collection::~Collection()
{
	if (ar != nullptr)
	{
		delete[]ar;
	}
}

void Collection::Add(const int item)
{
	length = length + 1;
	int*temp = new int[length];
	for (int i = 0; i < length - 1; ++i)
	{
		temp[i] = ar[i];
	}
	temp[length - 1] = item;
	delete[]ar;
	ar = temp;
}

int Collection::GetLength()
{
	return length;
}

void Collection::Print()
{
	for (int i = 0; i < length; ++i)
	{
		cout << ar[i] << ' ';
	}
	cout << endl;
}

bool Collection::Remove(const int item)
{
	bool result = false;
	for (int i = 0; i < length - 1;++i)
	{
		if (ar[i] == item)
		{
			for (int j = i; j < length - 1; ++j)
			{
				ar[j] = ar[j + 1];
			}
			result = true;
			length--;
			break;
		}
	}
	return result;
}