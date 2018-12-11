#pragma once

class Collection
{
public:
	Collection();
	Collection(const int item, const int count);
	Collection(const Collection& obj);
	~Collection();

	void Add(const int item);
	int GetLength();
	void Print();
	bool Remove(const int item);

private:
	int length = 0;
	int*ar = nullptr;
};
